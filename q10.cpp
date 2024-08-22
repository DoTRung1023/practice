#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Shape
{
private:
    double area;
    double perimeter;
public:
    Shape(): area(0), perimeter(0){}

    double get_area(){return area;}
    double get_perimeter(){return perimeter;}

    void set_area(double area) {
        this->area = area;
    }
    void set_perimeter(double perimeter) {
        this->perimeter = perimeter;
    }

};

class Triangle : public Shape
{
private:
    double a;
    double b;
    double c;
public:
    Triangle() {
        a = 0;
        b = 0;
        c = 0;
    }
    Triangle(double a, double b, double c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void set_a(double a) {
        this->a = a;
    }
    void set_b(double b) {
        this->b = b;
    }
    void set_c(double c) {
        this->c = c;
    }
    double get_a() {
        return a;
    }
    double get_b() {
        return b;
    }
    double get_c() {
        return c;
    }
    string triangle_type() {
        if(a+b>c && a+c>b && b+c>a) {
            if (a == b && a == c) {
                return "equilateral";
            }
            else if(a == b || b == c || a == c) {
                return "isosceles";
            }
            else  {
                return "scalence";
            }
        }
        else {
            return "invalid";
        }
    }
    void Calc_perimeter() {
        set_perimeter(a+b+c);
    }
    void Calc_area() {
        Calc_perimeter();
        double half_perimeter = get_perimeter()/2;
        set_area(sqrt(half_perimeter*(half_perimeter-a)*
                     (half_perimeter-b)*(half_perimeter-c)));
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double width;
public:
    Rectangle(){
        length = 0;
        width = 0;
    }
    Rectangle(double length, double width) {
        this->length = length;
        this->width = width;
    }
    double get_length(){return length;}
    double get_width(){return width;}
    void Calc_perimeter() {
        set_perimeter((length+width)*2);
    }
    void Calc_area() {
        set_area(length*width);
    }
};

class Circle : public Shape
{
private:
    double radius;
public:
    Circle() {
        radius = 0;
    }
    Circle(double radius): radius(radius) {}
    double get_radius() {
        return radius;
    }
    void calc_area() {
        set_area(pow(radius, 2)*M_PI);
    }
    void calc_circumference() {
        set_perimeter(2*M_PI*radius);
    }
};

int main() {
    Circle a(2.7);
    a.calc_area();
    a.calc_circumference();
    cout << "Radius: " << a.get_radius() << endl;
    cout << "Area: " << a.get_area() << endl;
    cout << "Circumference: " << a.get_perimeter() << endl;

    Triangle b(4.6, 2.8, 5.6);
    b.Calc_area();
    b.Calc_perimeter();
    cout << "Sides are: " << b.get_a() << ", "
                          << b.get_b() << ", "
                          << b.get_c() << endl;
    cout << "Area: " << b.get_area() << endl;
    cout << "Perimeter: " << b.get_perimeter() << endl;

    Rectangle c(3.6, 5.9);
    c.Calc_area();
    c.Calc_perimeter();
    cout << "Width: " << c.get_width() << ", "
         << "Length: "<< c.get_length() << endl;
    cout << "Area: " << c.get_area() << endl;
    cout << "Perimeter: " << c.get_perimeter() << endl;

    return 0;
}