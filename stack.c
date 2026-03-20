#include <stdio.h>
#include <stdbool.h>

#define MAX_CAPACITY 5

typedef struct {
    int top;
    int data[MAX_CAPACITY];
} StarkStack;

// Inicialización segura
void init_stack(StarkStack *s) {
    s->top = 0;
}

// Operación Push con blindaje
bool push(StarkStack *s, int value) {
    if (s->top < MAX_CAPACITY) {
        s->data[s->top++] = value;
        return true;
    }
    return false;
}

// Operación Pop con blindaje
bool pop(StarkStack *s, int *result) {
    if (s->top > 0) {
        *result = s->data[--s->top];
        return true;
    }
    return false;
}

int main() {
    StarkStack myStack;
    init_stack(&myStack);
    int option, val;

    do {
        printf("\n--- STACK ---");
        printf("\n1. Push (Ingresar)\n2. Pop (Sacar)\n3. Status\n4. Exit\nOption: ");
        if (scanf("%d", &option) != 1) break;

        switch(option) {
            case 1:
                printf("Dato: ");
                scanf("%d", &val);
                if (!push(&myStack, val)) printf("[!] Error: Stack Full\n");
                break;
            case 2:
                if (pop(&myStack, &val)) printf("[*] Out: %d\n", val);
                else printf("[!] Error: Stack Empty\n");
                break;
            case 3:
                printf("[i] Elementos: %d/%d\n", myStack.top, MAX_CAPACITY);
                break;
        }
    } while (option != 4);

    return 0;
}
