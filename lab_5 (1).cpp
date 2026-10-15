#include <iostream>
using namespace std;
//this program gives the 2-d dimensions of 3 circles based on input values

class Circle {
    private:
        double radius;
        const double PI = 3.14159;

    public:
        //default argument
        Circle(){
            radius = 0.0;
        }
        
        //sets radius from user input
        Circle(double r){
            radius = r;
        }

        //to set radius 
        void setRadius(double r){
            radius = r;
        }

        //for radius (from user)
        double getRadius(){
            return radius;
        }

        //for area
        double getArea(){
            return PI * radius * radius;
        }

        //for circumference
        double getCircumference(){
            return 2 * PI * radius;
        }

        //for diameter
        double getDiameter(){
            return 2 * PI * radius;
        }
};

int main(){

    double rad_1, rad_2, rad_3;
    cout << "Please enter 3 values for the radius of your circle(s): " << endl;
    cin >> rad_1 >> rad_2 >> rad_3;

    //so each radian value is able to go through the Circle class
    Circle circles[3] = { Circle(rad_1), Circle(rad_2), Circle(rad_3)};

    for(int i = 0; i < 3; i++){
        cout << "Circle " << (i + 1) << endl;
        cout << "Area: " << circles[i].getArea() << endl;
        cout << "Diameter: " << circles[i].getDiameter() << endl;
        cout << "Circumference: " << circles[i].getCircumference() << endl;
        cout << endl;
    }

    return 0;
}