// task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

bool isFibonacci(int num, int* fib1, int* fib2) {

    while (*fib2 <= num) {

        if (*fib2 == num) {

            return true;  
        }

        int temp = *fib2;
        *fib2 += *fib1;
        *fib1 = temp;
    }

    return false;  
}

int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int fib1 = 0, fib2 = 1;

    if (isFibonacci(num, &fib1, &fib2)) {

        cout << num << " is in the Fibonacci series" << endl;
    }
    else {

        cout << num << " is not in the Fibonacci series" << endl;
    }

}
