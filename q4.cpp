#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
    string company;
    string model;
    int year;
public:
    Car() {
        company = "";
        model = "";
        year = 0;
    }
    Car(string company, string model, int year) {
        this->company = company;
        this->model = model;
        this->year = year;
    }
    void set_company(string company) {
        this->company = company;
    }
    void set_model(string model) {
        this->model = model;
    }
    void set_year(int year) {
        this->year = year;
    }
    string get_company(){
        return company;
    }
    string get_model(){
        return model;
    }
    int get_year(){
        return year;
    }
};

int main() {
    Car a;
    cout << "a" << endl;
    cout << "Company: " << a.get_company() << endl;
    cout << "Model: " << a.get_model() << endl;
    cout << "Year: " << a.get_year() << endl;

    Car b("Toyota", "Vios", 2015);
    cout << "\nb" << endl;
    cout << "Company: " << b.get_company() << endl;
    cout << "Model: " << b.get_model() << endl;
    cout << "Year: " << b.get_year() << endl;

    a.set_company("BMW");
    a.set_model("Sport");
    a.set_year(2018);

    cout << "\na" << endl;
    cout << "Company: " << a.get_company() << endl;
    cout << "Model: " << a.get_model() << endl;
    cout << "Year: " << a.get_year() << endl;

    return 0;
}