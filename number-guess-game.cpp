//
// Created by Furqat on 14.12.2025.
//
#include <iostream>
using namespace std;
int num;
int guess;
int tries ;
int main() {
    srand(time(NULL));
    num = (rand() % 100+1);

    cout << "****** Number guess game *******" << endl;


    do {
        cout << "Enter a guess number" << endl;
        cin >> guess;
        tries++;

        if (guess > num) {
            cout<< "too high "<< endl;
        }
        else if (guess < num) {
            cout << "too low "<< endl;
        }
        else {
            cout << " Correct # you found with  " << tries << " tries" << endl;
        }
    }while (guess != num);
}
