//class example

class Rectangle {
    //private members
    private:
        double width, length;
    //public members
    public: // all prototypes of public functions
        void setWidth(double), setLength(double);
        //const --> read-only
        double getWidth() const;
        double getlength() const;
        double getArea() const;
}

r.width = 5.2; //wont work, width is private var

