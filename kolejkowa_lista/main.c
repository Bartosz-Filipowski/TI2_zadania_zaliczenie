#include <stdio.h>
#include "list.h"

void clear(void) {
    while (getchar() != '\n');
}

void menu(void) {
    printf("1. Enqueue (add to queue)\n");
    printf("2. Dequeue (remove from queue)\n");
    printf("3. Print queue\n");
    printf("4. Clear queue\n");
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
                errorCode = enqueue(value);
                !errorCode ? printf("Added to queue!\n\n") : printf("Failed to add.\n\n");
                break;

            case 2:

                errorCode = dequeue();
                !errorCode ? printf("Removed from queue!\n\n") : printf("Queue is empty.\n\n");
                break;

            case 3:

                printf("Queue: ");
                printQueue();
                printf("\n%d elements\n\n", getNodesCount());
                break;

            case 4:

                freeQueue();
                printf("Queue cleared.\n");
                break;

            case 0:
                freeQueue();
                return 0;

            default:

                printf("Invalid option.\n\n");
                break;
        }
    }

    freeQueue();
    return 0;
}
