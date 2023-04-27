// task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int biggestDivider(int* num) {

	for (int i = *num - 1; i >= 1; --i) {

		if (*num % i == 0)
			return i;
	}
	return 0;
}
int main() {

	int num ;
	cout << "Enter the number: "; cin >> num;
	cout << biggestDivider(&num);
}
