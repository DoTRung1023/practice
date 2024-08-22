#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    string class_name;
    int roll_number;
    double mark;
public:
    Student(): name(""), class_name(""), roll_number(0), mark(0){}
    Student(string name, string class_name, int roll_number, double mark):
        name(name), class_name(class_name), roll_number(roll_number), mark(mark){}

    void set_name(string name){this->name = name;}
    void set_class_name(string class_name){this->class_name = class_name;}
    void set_roll_number(int roll_number){this->roll_number = roll_number;}
    void set_mark(double mark){this->mark = mark;}

    string get_name(){return name;}
    string get_class_name(){return class_name;}
    int get_roll_number(){return roll_number;}
    double get_mark(){return mark;}

    string Member(){
        mark = round(mark);
        if (mark > 84) {
            return "HD";
        }
        else if (mark > 74) {
            return "D";
        }
        else if(mark > 64) {
            return "C";
        }
        else if (mark > 49) {
            return "P";
        }
        else {
            return "F";
        }
    }
};

int main() {
    Student a;
    cout << "Student a" << endl;
    cout << "Name: " << a.get_name() << endl;
    cout << "Class name: " << a.get_class_name() << endl;
    cout << "Roll number: " << a.get_roll_number() << endl;
    cout << "Mark: " << a.get_mark() << endl;
    cout << "Grade: " << a.Member() << endl;

    a.set_name("An");
    a.set_class_name("12N2");
    a.set_roll_number(1);
    a.set_mark(97);

    cout << "\nStudent a" << endl;
    cout << "Name: " << a.get_name() << endl;
    cout << "Class name: " << a.get_class_name() << endl;
    cout << "Roll number: " << a.get_roll_number() << endl;
    cout << "Mark: " << a.get_mark() << endl;
    cout << "Grade: " << a.Member() << endl;

    Student b("Ba", "10A1", 5, 49.5);

    cout << "\nStudent b" << endl;
    cout << "Name: " << b.get_name() << endl;
    cout << "Class name: " << b.get_class_name() << endl;
    cout << "Roll number: " << b.get_roll_number() << endl;
    cout << "Mark: " << b.get_mark() << endl;
    cout << "Grade: " << b.Member() << endl;

    return 0;
}