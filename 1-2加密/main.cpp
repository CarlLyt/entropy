#include "affine.h"
#include<iostream>
#include"string"
using namespace std;
int main() {
	char inString[50];
	char outString[50];
	cout << "Enter your encode string"<<endl;
	cin.get(inString,50,'\n');
	getchar();
	cout << "Your string is " << inString<< endl;
	enCode(inString,strlen(inString)-1);
	deCode(inString, strlen(inString)-1);
	cin.get();
	return 0;
}