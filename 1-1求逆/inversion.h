#include<iostream>
#include"vector"
using namespace std;

int gcdtime = 0;
vector<int> qStack(20);
int inverInput = 1;
int temp;
int lastnum;

template <typename R>
R gcd(R num1, R num2);

template <typename R>
R inversion(R inputnum)
{
	int gcdNum = gcd(26, inputnum % 26);
	if (gcdNum == 0)
	{
		cout << "input num is not prime to 26,so there is no inversion num" << endl;
		cin.get();
		return 0;
	}

	if (inverInput < 0)
	{
		cout << "===================" << (26 + inverInput%26) << endl;
		cin.get();
		return inverInput%26+26;
	}	
	else {
		cout << "the inversion num is ====>" << inverInput << endl;
		cin.get();
		return inverInput;
	}
}

template <typename R>
R gcd(R num1, R num2) {
	if (num2 == 1 || num2 == 0)
	{
		//cout << "======"<< temp << "||||||"<<lastnum<<endl;
		if (gcdtime > 1)
			inverInput = inverInput + temp + lastnum;
		else
			inverInput = inverInput + lastnum;
		return num2;   //|| »¥ËØ³ö¿Ú	
	}
		
	
	R q1 = num1 % num2;

	if (gcdtime == 0)
	{
		inverInput = -(num1 / num2);
		
		temp = inverInput;
		//cout << "gcdtime time 222222222222" << temp		 << endl;
	}
		
	else
	{
		lastnum = (-(num1 / num2));
		//cout << "gcdtime time "<<lastnum << endl;
		inverInput = inverInput * lastnum;
		//cout << "gcdtime time111111111111111111 " << inverInput << endl;
	}
	gcdtime++;
	gcd(num2, q1);
	
}