// task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int mult(int* num, int* num2) {

	int result = *num * *num2;
	return result;

}
int main() {

	int num, num2;

	cout << "Enter first number: "; cin >> num;
	cout << "Enter second number: "; cin >> num2;

	cout << mult(&num, &num2);
}
