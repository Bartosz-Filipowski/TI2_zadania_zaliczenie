#include <stdio.h>
#include "tablice.h"

void pokazTablice(int *tab, int size){
    printf("Zawartosc tablicy:\n");
    for (int i = 0; i < size; i++){
        printf("%d   " , *(tab + i));
    }
}

void minimalna(int *tab, int size) {
    int min = *tab;
    for (int i = 1; i < size; i++){
        if (*(tab + i) < min){
            min = *(tab + i);
        }
    }
    printf("Minimalna wartosc w tablicy to: %d\n", min);
}

void maksymalna(int *tab, int size) {
    int max = *tab;
    for (int i = 1; i < size; i++) {
        if (*(tab + i) > max){
            max = *(tab + i);
        }
    }
    printf("Maksymalna wartosc w tablicy to: %d\n", max);
}

void srednia(int *tab, int size){
    int suma = 0;
    for (int i = 0; i < size; i++){
        suma += *(tab + i);
    }
    printf("Srednia wartosc: %.2f\n", (double)suma / size);
}

void stworzTablice(int *tab, int size){
    printf("Podaj %d liczb do tablicy:\n", size);
    for (int i = 0; i < size; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", tab + i);
    }
}


int Zapiszplik(int *tab, int size){
    FILE *fptr = fopen("../tablica.txt", "w");
    if (!fptr) return 1;
    for (int i = 0; i < size; i++){
        fprintf(fptr, "%d\n", *(tab + i));
    }
    fclose(fptr);
    return 0;
}

int Odczytajplik(int *tab, int size){
    FILE *fptr = fopen("../tablica.txt", "r");
    if (!fptr) return 1;
    for (int i = 0; i < size; i++){
        fscanf(fptr, "%d", tab + i);
    }
    fclose(fptr);
    return 0;
}
