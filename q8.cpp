#include <iostream>

using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date(): day(0), month(0), year(0){}
    Date(int day, int month, int year): day(day), month(month), year(year){}

    void set_day(int day){this->day = day;}
    void set_month(int month){this->month = month;}
    void set_year(int year){this->year = year;}

    int get_day(){return day;}
    int get_month(){return month;}
    int get_year(){return year;}

    string valid_date() {
        if (day < 1 || day > 31) {return "invalid";}
        if (month < 1 || month > 12) {return "valid";}
        bool leap_year = false;
        if (year%400 == 0) {
            leap_year = true;
        }
        else if (year%100 == 0) {
            leap_year = false;
        }
        else if (year%4 == 0) {
            leap_year = true;
        }
        int min = 0;
        if (leap_year == true && month == 2) {
            min = 29;
        }
        else {
            switch (month) {
                case 1:
                    min = 31;
                    break;
                case 2:
                    min = 28;
                    break;
                case 3:
                    min = 31;
                    break;
                case 4:
                    min = 30;
                    break;
                case 5:
                    min = 31;
                    break;
                case 6:
                    min = 30;
                    break;
                case 7:
                    min = 31;
                    break;
                case 8:
                    min = 31;
                    break;
                case 9:
                    min = 30;
                    break;
                case 10:
                    min = 31;
                    break;
                case 11:
                    min = 30;
                    break;
                case 12:
                    min = 31;
                    break;
            }
        }
        if (day > min) {
            return "invalid";
        }
        else {
            return "valid";
        }
    }
};

int main() {
    Date date1;
    cout << "date1: " << date1.get_day() << "-" 
         << date1.get_month() << "-" 
         << date1.get_year() << " is " << date1.valid_date() << endl;

    date1.set_day(29);
    date1.set_month(6);
    date1.set_year(200);

    cout << "date1: " << date1.get_day() << "-" 
         << date1.get_month() << "-" 
         << date1.get_year() << " is " << date1.valid_date() << endl;

    date1.set_day(29);
    date1.set_month(2);
    date1.set_year(200);

    cout << "date1: " << date1.get_day() << "-" 
         << date1.get_month() << "-" 
         << date1.get_year() << " is " << date1.valid_date() << endl;

    date1.set_day(32);
    date1.set_month(8);
    date1.set_year(-990);

    cout << "date1: " << date1.get_day() << "-" 
         << date1.get_month() << "-" 
         << date1.get_year() << " is " << date1.valid_date() << endl;

    date1.set_day(29);
    date1.set_month(2);
    date1.set_year(2000);

    cout << "date1: " << date1.get_day() << "-" 
         << date1.get_month() << "-" 
         << date1.get_year() << " is " << date1.valid_date() << endl;

    return 0;
}