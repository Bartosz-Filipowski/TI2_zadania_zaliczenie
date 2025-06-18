#ifndef CAR_H
#define CAR_H





#include <string>

class Car {
private:
    static int nextID;
    int id;
    std::string brand;
    std::string color;
    std::string licensePlate;
    int productionYear;
    int mileage;

public:
    Car();
    Car(std::string brand, std::string color, std::string licensePlate, int productionYear, int mileage);

    int getId() const;
    std::string getBrand() const;
    std::string getColor() const;
    std::string getLicensePlate() const;
    int getProductionYear() const;
    int getMileage() const;

    void display() const;
};






#endif //CAR_H
