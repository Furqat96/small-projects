//
// Created by Furqat on 21.12.2025.
//
#include <iostream>
using namespace std;
void walk( int steps);
int main() {
    walk(50);

    return 0;
}
void walk(int steps) {
    for (int i = 0; i <steps; i++) {
        cout << "take a step" << endl;
    }
}