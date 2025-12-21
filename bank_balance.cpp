//
// Created by Furqat on 30.11.2025.
//
#include <iostream>
using namespace std;

    void showBalance(double balance);
    double deposit();
    double withdraw(double balance);

    int main() {
        double balance = 123.8;
        int choise = 0;
        do{
            cout << "*********************" << endl;
            cout << "Enter your choise" << endl;
            cout << "*********************" << endl;

            cout << "1 show balance" << endl;
            cout << "2 deposit money" << endl;
            cout << "3 withdraw money" << endl;
            cout << "4 exit " << endl;
            cin >> choise;

            switch (choise) {
                case 1: showBalance(balance);
                    break;
                case 2:balance += deposit();
                    break;
                case 3: balance -= withdraw(balance);
                    break;
                case 4: cout << "thanks visiting"<<endl;
                    break;
                default:cout << "invalid choise" << endl;
            }
        }while (choise !=4);
        return 0;
    }
    void showBalance(double balance){
            cout << "your balance is $ " << balance << fixed<<  endl;

        }
    double deposit(){
            return 0;
        }
    double withdraw(){
            return 0;
        }


