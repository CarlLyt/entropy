#include<iostream>
#include "inversion.h"

using namespace std;

int main() {
	int inputnum;
	cout << "CarlLi InforSecurity homework" << endl;
	cout << "input num ,we will give U the inversion num ===>" ;
	cin >> inputnum;
	inversion(inputnum);
	cout << "Have a nice day!" << endl;
	cin.get();
	return 0;
}