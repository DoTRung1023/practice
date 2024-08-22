#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;
    string country;
public:
    Person() {
        name = "";
        age = 0;
        country = "";
    }
    Person(string name, int age, string country) {
        this->name = name;
        this->age = age;
        this->country = country;
    }
    string get_name() {
        return name;
    }
    int get_age() {
        return age;
    }
    string get_country() {
        return country;
    }
    void set_name(string name) {
        this->name = name;
    }
    void set_age(int age) {
        this->age = age;
    }
    void set_country(string country) {
        this->country = country;
    }
};

int main() {
    Person an;
    cout << "an" << endl;
    cout << "Name: " << an.get_name() << endl;
    cout << "Age: " << an.get_age() << endl;
    cout << "Country: " << an.get_country() << endl;

    Person phong("Phong", 19, "Vietnam");
    cout << "\nphong" << endl;
    cout << "Name: " << phong.get_name() << endl;
    cout << "Age: " << phong.get_age() << endl;
    cout << "Country: " << phong.get_country() << endl;

    an.set_name("An");
    an.set_age(20);
    an.set_country("Asia");

    cout << "\nan" << endl;
    cout << "Name: " << an.get_name() << endl;
    cout << "Age: " << an.get_age() << endl;
    cout << "Country: " << an.get_country() << endl;

    return 0;
}