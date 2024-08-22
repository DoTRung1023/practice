#include <iostream>

using namespace std;

class BankAccount
{
private:
    string account_number;
    float balance;
public:
    BankAccount() {
        account_number = "";
        balance = 0;
    }
    BankAccount(string account_number, float balance) {
        this->account_number = account_number;
        this->balance = balance;
    }
    void set_account_num(string account_number) {
        this->account_number = account_number;
    }
    void set_balance(float balance) {
        this->balance = balance;
    }
    float get_balance() {
        return balance;
    }
    string get_account_num() {
        return account_number;
    }
    void deposit(float money) {
        balance += money;
    }
    void withdraw(float money) {
        balance -= money;
    }
};

int main() {
    BankAccount a;
    cout << "a" << endl;
    cout << "Account number: " << a.get_account_num() << endl;
    cout << "Balance: " << a.get_balance() << endl;

    a.set_account_num("36583649472");
    a.set_balance(262380);

    cout << "\na" << endl;
    cout << "Account number: " << a.get_account_num() << endl;
    cout << "Balance: " << a.get_balance() << endl;

    BankAccount b("532872040932", 43809);
    cout << "\nb" << endl;
    cout << "Account number: " << b.get_account_num() << endl;
    cout << "Balance: " << b.get_balance() << endl;

    return 0;
}