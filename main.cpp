#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
public:
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual void displayInfo() = 0;
    virtual ~Vehicle(){};
};

class Car: public Vehicle
{
public:
    void start(){
        cout << "Car is starting with ignition key." << endl;
    }
    void stop(){
        cout << "Car is stopping by pressing the brake." << endl;
    }
    void displayInfo(){
        cout << "This is a car." << endl;
    }
};

class Bike: public Vehicle
{
public:
    void start(){
        cout << "Bike is starting with a kick." << endl;
    }
    void stop(){
        cout << "Bike is stopping by applying the hand brake." << endl;
    }
    void displayInfo(){
        cout << "This is a bike." << endl;
    }
};

class Truck: public Vehicle
{
public:
    void start(){
        cout << "Truck is starting with a heavy-duty ignition." << endl;
    }
    void stop(){
        cout << "Truck is stopping with air brakes." << endl;
    }
    void displayInfo(){
        cout << "This is a truck." << endl;
    }
};

class VehicleManager
{
protected:
    Vehicle** vehicleList;
    int currentNum;
    int maxNum;
public:
    VehicleManager(): VehicleManager(0){}
    VehicleManager(int maxNum):maxNum(maxNum), currentNum(0){
        vehicleList = new Vehicle*[maxNum];
    }

    void addVehicle(Vehicle* vehicle){
        if(currentNum < maxNum) {
            vehicleList[currentNum] = vehicle;
            currentNum++;
            cout << "Add successfully" << endl;
        }
        else {
            cout << "Add unsuccessfully" << endl;
        }
    }

    void startAll() {
        for(int i = 0; i<currentNum; i++) {
            vehicleList[i]->start();
        }
    }
    void stopAll() {
        for(int i = 0; i<currentNum; i++) {
            vehicleList[i]->stop();
        }
    }
    void showAllInfo() {
        for(int i = 0; i<currentNum; i++) {
            vehicleList[i]->displayInfo();
        }
    }
    ~VehicleManager(){
        for(int i = 0; i < currentNum; i++) {
            delete vehicleList[i];
        }
        delete[] vehicleList;
    }
};

int main(){
    VehicleManager manager(3);

    // Create instances of Car, Bike, and Truck
    Vehicle* car = new Car;
    Vehicle* bike = new Bike;
    Vehicle* truck = new Truck;

    // Add vehicles to the manager
    manager.addVehicle(car);
    manager.addVehicle(bike);
    manager.addVehicle(truck);

    // Demonstrate polymorphism
    std::cout << "Starting all vehicles:" << std::endl;
    manager.startAll();
    
    std::cout << "\nStopping all vehicles:" << std::endl;
    manager.stopAll();

    std::cout << "\nDisplaying information of all vehicles:" << std::endl;
    manager.showAllInfo();

    return 0;
}