// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int powerNum(int* num ) {
	*num = *num * *num;
	return *num;
}
int main() {

	int num ;
	cout << "Enter the number: "; cin >> num;

	cout << powerNum(&num);
}
