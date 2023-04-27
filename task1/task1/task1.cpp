// task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void addOne(int* pnum) {

	*pnum = *pnum + 1;
}

int main()
{
	int num = 5;

	cout << num << endl;

	addOne(&num);

	cout << num << endl;
}