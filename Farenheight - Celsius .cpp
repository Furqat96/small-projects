//
// Created by Furqat on 14.12.2025.
//
#include  <iostream>
using namespace std;

int main() {
    cout << "F = Farenheight" << endl;
    cout << "C = Celsius" << endl;
    char unit;
    double temp;
    cout << "Choose the unit >>>   ";
    cin >> unit ;
    if (unit == 'F' || unit == 'f') {
        cout<< "enter the unit in Celsius"<<endl;
        cin >> temp;
        temp = (temp * 1.8)+ 32;
        cout << temp << endl;
    }
    else if (unit == 'C' || unit == 'c') {
        cout << "enter the unit in Fahrenheit"<<endl;
        cin >> temp;
        temp = (temp - 32)/1.8;
        cout << temp << endl;
    };
    else {
        cout << "Please enter the only 'F' or 'C'"<<endl;
    };
}