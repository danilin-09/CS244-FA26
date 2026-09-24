#include<iostream>
using namespace std;

// rectange class declaration
class Rectangle {
    private: 
        double width, length;
    public: 
        void setWidth(double);
        void setLength(double);
        double getWidth() const; //accessor functions
        double getLength() const;
        double getArea() const;
}

void Rectangle::setLength(double l){
    length = l;
}

void Rectangle::setWidth(double w){
    width = w;
}

double Rectangle::getLength() const{
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getArea() const {
    return width*length;
}

int main(){
    
    Rectangle box; //  box is object/instance of rectangle
    double rectWidth;
    double rectLength;

    cout << "please enter width and length for the rectangle: " << endl;
    cin >> rectWidth >> rectLength; //program cannot access these 2 vars directly

    //program must call public interface
    box setWidth(rectWidth); // public, can be called
    box setLength(rectLength); 

    cout << "here is the rectangle's data\n";
    cout << "width: " <<
    cout << "length: " << 
    cout << "area: " <<


    return 0;
}