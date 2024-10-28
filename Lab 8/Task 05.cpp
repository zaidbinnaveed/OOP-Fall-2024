#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int year;

public:
    Vehicle(string vMake, string vModel, int vYear) 
        : make(vMake), model(vModel), year(vYear) {}

    void displayVehicle() const {
        cout << "Vehicle - Make: " << make << ", Model: " << model << ", Year: " << year << endl;
    }
};

class Car : public Vehicle {
protected:
    int numDoors;
    float fuelEfficiency;

public:
    Car(string vMake, string vModel, int vYear, int doors, float efficiency) 
        : Vehicle(vMake, vModel, vYear), numDoors(doors), fuelEfficiency(efficiency) {}

    void displayCar() const {
        displayVehicle();
        cout << "Number of Doors: " << numDoors << ", Fuel Efficiency: " << fuelEfficiency << " km/l" << endl;
    }
};

class ElectricCar : public Car {
    float batteryLife;

public:
    ElectricCar(string vMake, string vModel, int vYear, int doors, float efficiency, float battery) 
        : Car(vMake, vModel, vYear, doors, efficiency), batteryLife(battery) {}

    void displayElectricCar() const {
        displayCar();
        cout << "Battery Life: " << batteryLife << " hours" << endl;
    }
};

int main() {
    ElectricCar myElectricCar("Tesla", "Model S", 2022, 4, 0.0, 12.5);
    myElectricCar.displayElectricCar();
    return 0;
}
