#include <iostream>

using namespace std;

class Triangle
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
};

int main() {
    Triangle x;
    cout << "Triangle x with 3 sides: " 
         << x.get_a() << ", "
         << x.get_b() << ", "
         << x.get_c() << " has type: " 
         << x.triangle_type() << endl;

    x.set_a(1);
    x.set_b(1);
    x.set_c(3);

    cout << "Triangle x with 3 sides: " 
         << x.get_a() << ", "
         << x.get_b() << ", "
         << x.get_c() << " has type: " 
         << x.triangle_type() << endl;

    x.set_a(1);
    x.set_b(1);
    x.set_c(1);

    cout << "Triangle x with 3 sides: " 
         << x.get_a() << ", "
         << x.get_b() << ", "
         << x.get_c() << " has type: " 
         << x.triangle_type() << endl;

    x.set_a(2);
    x.set_b(2);
    x.set_c(1);

    cout << "Triangle x with 3 sides: " 
         << x.get_a() << ", "
         << x.get_b() << ", "
         << x.get_c() << " has type: " 
         << x.triangle_type() << endl;

    Triangle y(3.6, 6.8, 3.9);
    cout << "Triangle y with 3 sides: " 
         << y.get_a() << ", "
         << y.get_b() << ", "
         << y.get_c() << " has type: " 
         << y.triangle_type() << endl;

    return 0;
}