//
// Created by Furqat on 21.12.2025.
//
#include <iostream>
using namespace std;
int main() {

    cout<< "Enter your age "<< endl;
    int age;
    cin >> age;
    if (age >=100) {
        cout<< "You are too old to enter this site !" << endl;
    }
    else if (age <= 18) {
        cout<< "You are too young to enter this site" << endl;
    }
    else if (age >= 18 ) {
        cout<< "Welcome to this site" << endl;
    }
    int month;
    cout << "Enter the month numbers from 1 to 12 " << endl;
    cin >> month;

}