#include <iostream>
#include "Car.h"
#include "CarManage.h"

using namespace std;
const int MAX_CARS = 100;
Car cars[MAX_CARS];
int carCount = 0;

int main() {
    int choice;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Add car\n";
        cout << "2. Show all cars\n";
        cout << "3. Show car by ID\n";
        cout << "4. Delete car by ID\n";
        cout << "5. Save cars to file\n";
        cout << "0. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1: addCar(); break;
            case 2: showAllCars(); break;
            case 3: showCarById(); break;
            case 4: deleteCarById(); break;
            case 5: saveToFile(); break;
            case 0: cout << "Exiting program.\n"; break;
            default: cout << "Invalid option.\n";
        }

    } while (choice != 0);

    return 0;
}
