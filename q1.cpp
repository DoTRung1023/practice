#include <iostream>
#include <cmath>

using namespace std;

class Circle 
{
private:
    double radius;
    double area;
    double circumference; 
public:
    Circle() {
        radius = 0;
        area = 0;
        circumference = 0;
    }
    Circle(double radius): radius(radius), area(0), circumference(0) {}
    double get_radius() {
        return radius;
    }
    double calc_area() {
        area = pow(radius, 2)*M_PI;
        return area;
    }
    double calc_circumference() {
        circumference = 2*M_PI*radius;
        return circumference;
    }

};

int main() {
    Circle a;
    cout << "Radius: " << a.get_radius() << endl;
    cout << "Area: " << a.calc_area() << endl;
    cout << "Circumference: " << a.calc_circumference() << endl;

    Circle b(1.56);
    cout << "Radius: " << b.get_radius() << endl;
    cout << "Area: " << b.calc_area() << endl;
    cout << "Circumference: " << b.calc_circumference() << endl;

    return 0;
}