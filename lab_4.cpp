#include <iostream>
// this program creates a class named car and other member functions and variables related to a car
using namespace std;

class Car {
    private:
        int yearModel, speed;
        string make;
    public:
    Car(int year, string carMake){
        yearModel = year;
        make = carMake;
        speed = 0;
    }

    //return private values (year, speed, make)
    int check_year() {
        return yearModel;
    }
    string check_make() {
        return make;
    }
    int check_speed() {
        return speed;
    }

    //acceleration function
    void accelerate() {
        speed += 5;
    }
    
    //brake function
    void brake() {
        speed -= 5;
    }
};

int main(){
    Car car1(2020, "Toyota Corolla");
    Car car2(2015, "Nissan Murano");

    // car 1 accelerating
    cout << "Starting speed of Car 1: " << car1.check_speed() << endl;
    for(int i = 0; i < 5; i++){
        car1.accelerate();
        cout << "Current speed after braking (" << i+1 << "): " << car1.check_speed() << endl;
    }
    
    cout << endl; 

    // car 2 breaking
    cout << "Starting speed of Car 2: " << car2.check_speed() << endl;
    for(int i = 0; i < 5; i++){
        car2.brake();
        cout << "Current speed after braking (" << i+1 << "): " << car2.check_speed() << endl;
    }

    return 0;
}