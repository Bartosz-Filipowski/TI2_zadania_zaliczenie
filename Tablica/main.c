#include <stdio.h>
#include "tablice.h"

int main() {
    int MenuOption;
    int errorCode = 0;
    int tablica[SIZE] = {0};


    do {
        printf("\n--- MENU ---\n");
        printf("0. Wyjscie z programu\n");
        printf("1. Stworz tablice\n");
        printf("2. Pokaz tablice\n");
        printf("3. Minimalna\n");
        printf("4. Maksymalna\n");
        printf("5. Srednia\n");
        printf("6. Zapisz tablice do pliku\n");
        printf("7. Odczytaj tablice z pliku\n");
        printf("Wybierz opcje: ");
        scanf("%d", &MenuOption);

        switch (MenuOption) {
            case 0:
                printf("Wyjscie z programu.\n");
                break;
            case 1:
                stworzTablice(tablica, SIZE);

                break;
            case 2:
                pokazTablice(tablica, SIZE);
                break;
            case 3:
                minimalna(tablica, SIZE);
                break;
            case 4:
                maksymalna(tablica, SIZE);
                break;
            case 5:
                srednia(tablica, SIZE);
                break;
            case 6:
                errorCode = Zapiszplik(tablica, SIZE);
                printf(errorCode ? "Blad zapisu.\n" : "Zapisano poprawnie.\n");
                break;
            case 7:
                errorCode = Odczytajplik(tablica, SIZE);

                printf(errorCode ? "Blad odczytu.\n" : "Odczytano poprawnie.\n");
                break;

            default:
                printf("Nieprawidlowa opcja. Sprobuj ponownie.\n");
        }

    } while (MenuOption != 0);

    return 0;
}
