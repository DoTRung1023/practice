#include <iostream>
#include <string>

using namespace std;

class Rectangle
{
private:
    double length;
    double width;
    double area;
    double perimeter;
public:
    Rectangle(){
        length = 0;
        width = 0;
        area = 0;
        perimeter = 0;
    }
    Rectangle(double length, double width) {
        this->length = length;
        this->width = width;
        area = 0;
        perimeter = 0;
    }
    double get_length(){return length;}
    double get_width(){return width;}
    double Calc_perimeter() {
        perimeter = (length+width)*2;
        return perimeter;
    }
    double Calc_area() {
        area = length*width;
        return area;
    }
};

int main() {
    Rectangle a;
    cout << "Rectangle a" << endl;
    cout << "Length: " << a.get_length() << endl;
    cout << "Width: " << a.get_width() << endl;
    cout << "Area: " << a.Calc_area() << endl;
    cout << "Perimeter: " << a.Calc_perimeter() << endl;

    Rectangle b(32.43, 5.24);
    cout << "\nRectangle b" << endl;
    cout << "Length: " << b.get_length() << endl;
    cout << "Width: " << b.get_width() << endl;
    cout << "Area: " << b.Calc_area() << endl;
    cout << "Perimeter: " << b.Calc_perimeter() << endl;

    return 0;
}