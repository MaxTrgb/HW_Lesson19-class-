// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isEven(int* num) {

    if (*num % 2 == 0)
    {
        return true;
    }
    return false;
}
int main(){

	int num = 4, num2 = 5;
    cout << num << endl << num2 << endl;

    if (isEven(&num)) {
        cout << num << " is even." << endl;
    }
    else {
        cout << num << " is odd." << endl;
    }

    if (isEven(&num2)) {
        cout << num2 << " is even." << endl;
    }
    else {
        cout << num2 << " is odd." << endl;
    }
}
