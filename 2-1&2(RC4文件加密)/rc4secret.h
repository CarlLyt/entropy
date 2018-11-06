#pragma once
#include"iostream"
using namespace std;

void swap( char *ch1,  char *ch2)
{
	char *temp;
	temp = ch1;
	ch1 = ch2;
	ch2 = temp;
}

char* productscrectiostream( char *S, int lens,char *T,int selens) 
{
	lens--;
	char* Ksercet = new char[selens];
	for (int i = 0; i < selens-1; i++)
	{
		T[i] = S[i % lens];
	}
	T[selens] = '\0';
	cout << "product iostream====>" << T << endl;
	int i = 0; int j = 0; int t = 0;
	
	for (; i < selens - 1; i++)
	{
		j = (j + S[i] + T[i]) %(selens-1);
		swap(S[i],S[j]);
		t = S[i] + S[j];
		Ksercet[i] = S[t];
	}
	Ksercet[selens] = '\0';
	return Ksercet;
}
char* makeSecrect(char* Ksecret, char* secrect,int lens)
{
	int i = 0;
	char* Msecrect = new char[lens];
	for (;i<lens;i++) 
	{
		Msecrect[i] = Ksecret[i] ^ secrect[i];
	}
	return Msecrect;
}
char* dealSecrect(char* Ksecret, char* Msecrect, int lens)
{
	int i = 0;
	char* initalsecrect = new char[lens];
	for (; i < lens; i++)
	{
		initalsecrect[i] = Ksecret[i] ^ Msecrect[i];
	}
	return initalsecrect;
}
