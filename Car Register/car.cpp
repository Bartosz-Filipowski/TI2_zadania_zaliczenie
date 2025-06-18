#include "Car.h"
#include <iostream>

int Car::nextID = 1;

Car::Car() : id(0), brand(""), color(""), licensePlate(""), productionYear(0), mileage(0) {}

Car::Car(std::string brand, std::string color, std::string licensePlate, int productionYear, int mileage)
    : brand(brand), color(color), licensePlate(licensePlate), productionYear(productionYear), mileage(mileage) {
    id = nextID++;
}

int Car::getId() const { return id; }
std::string Car::getBrand() const { return brand; }
std::string Car::getColor() const { return color; }
std::string Car::getLicensePlate() const { return licensePlate; }
int Car::getProductionYear() const { return productionYear; }
int Car::getMileage() const { return mileage; }

void Car::display() const {
    std::cout << "ID: " << id << "\n";
    std::cout << "Brand: " << brand << "\n";
    std::cout << "Color: " << color << "\n";
    std::cout << "License Plate: " << licensePlate << "\n";
    std::cout << "Production Year: " << productionYear << "\n";
    std::cout << "Mileage: " << mileage << " km\n";
    std::cout << "-----------------------------\n";
}
