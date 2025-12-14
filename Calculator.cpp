//
// Created by Furqat on 13.12.2025.
//
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    char OP;
    double num1,num2,result;
    cout << "*** calculator ***" << endl;
    cout << "Enter either (+,-,*,/)" << endl;
    cin>>OP;
    cout << "enter num1" << endl;
    cin >> num1;
    cout << "enter num2" << endl;
    cin >> num2;
    switch (OP) {
        case '+':
            result = num1 + num2 ;
            cout << "result = " << result << endl;
            break;
        case '-':
            result = num1 - num2 ;
            cout << "result = " << result << endl;
            break;
        case '*':
            result =  num1 * num2 ;
            cout << "result = " << result << endl;
            break;
        case '/':
            result = num1 / num2 ;
            cout << "result = " << result << endl;
            break;
        default:
            cout << "Your responce is incorrect" << endl;
    }
}