#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    string name;
    string ID;
    double salary;
    double salary_rate;
public:
    Employee(): name(""), ID(""), salary(0), salary_rate(0) {}
    Employee(string name, string ID, double salary, double salary_rate): 
        name(name), ID(ID), salary(salary), salary_rate(salary_rate) {}
    void set_name(string name){this->name = name;}
    void set_ID(string ID){this->ID = ID;}
    void set_salary(double salary){this->salary = salary;}
    void set_salary_rate(double salary_rate){this->salary_rate = salary_rate;}

    string get_name(){return name;}
    string get_ID(){return ID;}
    double get_salary(){return salary;}
    double get_salary_rate(){return salary_rate;}

    void calc_salary(int performance) {
        salary += performance*salary_rate;
    }
};

int main() {
    Employee a;
    cout << "a" << endl;
    cout << "Name: " << a.get_name() << endl;
    cout << "ID: " << a.get_ID() << endl;
    cout << "Salary: " << a.get_salary() << endl;
    cout << "Salary rate: " << a.get_salary_rate() << endl;

    a.set_ID("236576");
    a.set_name("Ben");
    a.set_salary(50000);
    a.set_salary_rate(25);

    cout << "\na" << endl;
    cout << "Name: " << a.get_name() << endl;
    cout << "ID: " << a.get_ID() << endl;
    cout << "Salary: " << a.get_salary() << endl;
    cout << "Salary rate: " << a.get_salary_rate() << endl;

    a.calc_salary(26);

    cout << "\na" << endl;
    cout << "Name: " << a.get_name() << endl;
    cout << "ID: " << a.get_ID() << endl;
    cout << "Salary: " << a.get_salary() << endl;
    cout << "Salary rate: " << a.get_salary_rate() << endl;

    Employee b("Linda", "326817", 7162, 25);
    cout << "\nb" << endl;
    cout << "Name: " << b.get_name() << endl;
    cout << "ID: " << b.get_ID() << endl;
    cout << "Salary: " << b.get_salary() << endl;
    cout << "Salary rate: " << b.get_salary_rate() << endl;

    return 0;
}