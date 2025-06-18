#include <stdio.h>

#define QUEUE_SIZE 5

int queue[QUEUE_SIZE];
int front = 0;
int rear = 0;
int count = 0;


int isQueueEmpty();
int isQueueFull();
void enqueue(int val);
int dequeue();
int peek();
void printQueue();
void menu(void);

void enqueue(int val) {
    if (!isQueueFull()) {
        queue[rear] = val;
        rear = (rear + 1) % QUEUE_SIZE;
        count++;
    }
}

int dequeue() {
    if (!isQueueEmpty()) {
        int val = queue[front];
        front = (front + 1) % QUEUE_SIZE;
        count--;
        return val;
    }
    return -1;
}

int peek() {
    if (!isQueueEmpty()) {
        return queue[front];
    }
    return -1;
}

int isQueueEmpty() {
    return count == 0;
}

int isQueueFull() {
    return count == QUEUE_SIZE;
}

void printQueue() {
    printf("Zawartosc kolejki: ");
    for (int i = 0; i < count; i++) {
        int index = (front + i) % QUEUE_SIZE;
        printf("%d ", queue[index]);
    }
    printf("\n");
}

void menu(void) {
    printf("\n");
    printf("1 - dodaj liczbe do kolejki (Enqueue)\n");
    printf("2 - odczytaj wartosc z poczatku kolejki (Peek)\n");
    printf("3 - zdejmij liczbe z kolejki (Dequeue)\n");
    printf("4 - sprawdz czy kolejka jest pusta\n");
    printf("5 - sprawdz czy kolejka jest pelna\n");
    printf("6 - koniec programu\n");
    printf("7 - pokaz zawartosc kolejki\n");
    printf("\n");
}

int main() {
    int temp = 0;
    int option = 0;
    printf("KOLEJKA - implementacja w tablicy statycznej (FIFO)\n");
    while (1) {
        menu();
        scanf("%d", &option);

        switch (option) {
            case 1:
                if (!isQueueFull()) {
                    printf("Podaj wartosc: ");
                    scanf("%d", &temp);
                    enqueue(temp);
                } else {
                    printf("operacja niedozwolona - KOLEJKA pelna!!!\n\n");
                }
                break;

            case 2:
                if (!isQueueEmpty()) {
                    temp = peek();
                    printf("Odczytana wartosc: %d\n", temp);
                } else {
                    printf("operacja niedozwolona - KOLEJKA pusta!!!\n\n");
                }
                break;

            case 3:
                if (!isQueueEmpty()) {
                    temp = dequeue();
                    printf("Zdjeta wartosc: %d\n", temp);
                } else {
                    printf("operacja niedozwolona - KOLEJKA pusta!!!\n\n");
                }
                break;

            case 4:
                printf("KOLEJKA %s\n", isQueueEmpty() ? "jest pusta." : "nie jest pusta.");
                break;

            case 5:
                printf("KOLEJKA %s\n", isQueueFull() ? "jest pelna." : "nie jest pelna.");
                break;

            case 6:
                return 0;

            case 7:
                printQueue();
                break;

            default:
                printf("Wybierz wlasciwa opcje.\n\n");
                break;
        }
    }

    return 0;
}
