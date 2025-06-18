#include <stdio.h>

#include "list.h"

void clear(void) {
    while (getchar() != '\n');
}

void menu(void) {

    printf("1. Push (add to stack)\n");
    printf("2. Pop (remove from stack)\n");
    printf("3. Print stack\n");
    printf("4. Clear stack\n");
    printf("0. Exit\n\n");
}

int main() {
    int value = 0, option = 0, errorCode = 0;

    while (1) {
        menu();
        while (!scanf("%d", &option)) {
            printf("Not an integer! Input an integer: ");
            clear();
        }

        switch (option) {
            case 1:

                printf("Enter a number: ");
                while (!scanf("%d", &value)) {
                    printf("Not an integer! Input an integer: ");
                    clear();
                }
                errorCode = push(value);
                !errorCode ? printf("Pushed to stack!\n\n") : printf("Failed to push.\n\n");
                break;

            case 2:

                errorCode = pop();
                !errorCode ? printf("Popped from stack!\n\n") : printf("Stack is empty.\n\n");
                break;

            case 3:

                printf("Stack (top to bottom): ");
                printStack();
                printf("\n%d elements\n\n", getNodesCount());
                break;

            case 4:

                freeStack();
                printf("Stack cleared.\n");
                break;

            case 0:
                freeStack();
                return 0;

            default:

                printf("Invalid option.\n\n");
                break;
        }
    }

    freeStack();
    return 0;
}
