# Reporte de Auditoría Técnica: Sistemas Legacy (C)
**Ingeniero:** Fridsco  
**Estatus:** Fase de Diagnóstico I Completada  
**Fecha de Revisión:** Marzo 2026  

---

## Resumen de Hallazgos Generales
Tras una revisión exhaustiva de los algoritmos iniciales (2020-2022), se identificaron patrones de programación que, aunque funcionales, presentan áreas de mejora crítica en portabilidad, gestión de memoria y cumplimiento de estándares **ISO C** modernos. Estos hallazgos son vitales para garantizar el despliegue en hardware actual como **Wii IOS** o **Apple A10**.

### Puntos Críticos Identificados
* **Uso de Librerías Obsoletas:** Dependencia de la cabecera no estándar `<conio.h>`. Esto restringe la ejecución a entornos MS-DOS/Windows antiguos y provoca fallos en sistemas POSIX y microkernels de consolas.
* **Gestión de Memoria y Stack:** Declaración de variables redundantes (Ej: `char ABC = 65` y `char abc = 97`) que consumen registros innecesarios y aumentan el ruido en el código fuente.
* **Estándar C y Legibilidad:** Omisión de tipos de retorno en `main()` y el uso de "Magic Numbers" (valores decimales directos como 65-122) que dificultan el mantenimiento.

---

## Bitácora de Hallazgos Operativos

### 1. Casos: Generación de Abecedarios (`abecedario.c` / `abecedario_min.c`)
* **Fallo de Lógica:** Inclusión de variables (`ABC`/`abc`) que no participan en el flujo de datos principal.
* **Impacto:** Consumo innecesario de memoria y baja eficiencia de procesamiento.
* **Solución:** Reemplazo de `getche()` por `getchar()` de la librería estándar `<stdio.h>` y transición a literales de carácter (`'A' - 'Z'`) para permitir que el compilador gestione el valor numérico automáticamente.

---

## Veredicto de Ingeniería
Los códigos analizados cumplen su función lógica básica, pero presentan una arquitectura frágil para sistemas de alto rendimiento. Se han conservado en este directorio para documentar el progreso técnico y la evolución del aprendizaje.

Como medida correctiva, se ha procedido a la creación de un **Módulo Unificado** (`alphabet_generator.c`) en la raíz del repositorio, el cual implementa programación modular para solventar estas deficiencias.

---

### 2. Caso: Multiplicación con Salto (`multiplicacion.c`)
* **Fallo de Flujo de Control:** Uso de la instrucción `goto` para crear un bucle de repetición infinito hacia la etiqueta `Inicio`.
* **Impacto:** Esta práctica genera lo que en ingeniería se conoce como **"Spaghetti Code"**, rompiendo la jerarquía de la programación estructurada y dificultando la depuración y escalabilidad del software.
* **Problema de Portabilidad:** Inclusión de `system("cls")`. Esta función suspende el proceso actual para llamar a un comando del sistema operativo (CMD de Windows), lo cual es ineficiente y provoca fallos de ejecución en entornos no-Windows como **Wii IOS** o **Linux**.
* **Dependencias Innecesarias:** Inclusión de `<windows.h>` sin uso de funciones de la API de Windows, aumentando el tiempo de compilación y el peso del binario final.
* **Solución:** Implementación de estructuras de control cíclicas estándar (`do-while`) y validación de entrada de datos mediante el valor de retorno de `scanf`. Se sustituyen los comandos de sistema por saltos de línea (`\n`) para garantizar una ejecución multiplataforma.

---

### 3. Comparativa: Contadores Iterativos (`contador_for.c` vs `contador_do_while.c`)
* **Análisis de Comportamiento:** Se identificó que el uso de `do-while` en contadores dependientes de entrada de usuario es propenso a errores de lógica, ya que garantiza al menos una ejecución aunque el límite sea menor al inicio.
* **Optimización de Scope:** Se recomienda la declaración de iteradores dentro del ámbito del ciclo (`inline scope`) para optimizar el uso de memoria en el stack.
* **Veredicto:** El ciclo `for` se establece como el estándar para iteraciones con límites definidos, mientras que el `do-while` se reserva para procesos que requieren una ejecución inicial obligatoria (ej. menús de usuario).

---

### 6. Estructura de Datos: Pila Estática (`pila.c`)
* **Vulnerabilidad Crítica:** Gestión de índices de arreglo sin validación en las funciones `push` y `pop`.
* **Riesgo:** Desbordamiento de búfer (*Buffer Overflow*) al exceder el límite `max`, permitiendo la corrupción de direcciones de memoria adyacentes.
* **Problema de Portabilidad:** Dependencia de códigos ASCII manuales para caracteres extendidos, incompatibles con terminales modernas (UTF-8).
* **Solución:** Implementación de funciones con retorno booleano para validar el estado de la estructura antes de operar, garantizando la integridad de la memoria.

*"El código del pasado es el mapa de aprendizaje para el ingeniero del futuro."*
