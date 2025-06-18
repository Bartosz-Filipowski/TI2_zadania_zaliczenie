#include <iostream>
#include <fstream>
#include "CarManage.h"

using namespace std;

extern Car cars[];
extern int carCount;
const int MAX_CARS = 100;

void addCar() {
    if (carCount >= MAX_CARS) {
        cout << "Reached max capacity of cars.\n";
        return;
    }

    string brand, color, licensePlate;
    int year, mileage;

    cout << "Enter brand: ";
    cin >> brand;
    cout << "Enter color: ";
    cin >> color;
    cout << "Enter license plate: ";
    cin >> licensePlate;
    cout << "Enter production year: ";
    cin >> year;
    cout << "Enter mileage (km): ";
    cin >> mileage;

    cars[carCount] = Car(brand, color, licensePlate, year, mileage);
    carCount++;

    cout << "Car added with ID: " << cars[carCount - 1].getId() << "\n";
}

void showAllCars() {
    if (carCount == 0) {
        cout << "No cars available.\n";
        return;
    }

    for (int i = 0; i < carCount; i++) {
        cars[i].display();
    }
}

void showCarById() {
    int id;
    cout << "Enter car ID: ";
    cin >> id;

    for (int i = 0; i < carCount; i++) {
        if (cars[i].getId() == id) {
            cars[i].display();
            return;
        }
    }
    cout << "Car with that ID not found.\n";
}

void deleteCarById() {
    int id;
    cout << "Enter car ID to delete: ";
    cin >> id;

    for (int i = 0; i < carCount; i++) {
        if (cars[i].getId() == id) {
            for (int j = i; j < carCount - 1; j++) {
                cars[j] = cars[j + 1];
            }
            carCount--;
            cout << "Car deleted.\n";
            return;
        }
    }
    cout << "Car with that ID not found.\n";
}

void saveToFile() {
    std::ofstream file("cars.txt");
    if (!file) {
        std::cout << "Nie można otworzyć pliku do zapisu.\n";
        return;
    }

    for (int i = 0; i < carCount; i++) {
        file << cars[i].getId() << " "
             << cars[i].getBrand() << " "
             << cars[i].getColor() << " "
             << cars[i].getLicensePlate() << " "
             << cars[i].getProductionYear() << " "
             << cars[i].getMileage() << "\n";
    }

    file.close();
    std::cout << "Lista samochodów zapisana do pliku cars.txt\n";
}
