//
// Created by Furqat on 21.12.2025.
//
#include <iostream>
using namespace std;
int main() {
    char *pGrades = NULL;
    int size;
    cout << "How many grades enter in ?" << endl;
    cin >> size;
    pGrades = new char[5];
    for (int i = 0; i < size; i++) {
        cout << "Enter a grades " << i + 1 << " " << endl;
        cin >> pGrades[i];
    }
    for (int i = 0; i < size; i ++ ) {
        cout << pGrades[i] << " ";

    }
    delete[] pGrades;
    return 0;
}
