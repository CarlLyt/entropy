#include<iostream>
#include<fstream>
#include"rc4secret.h"
#include<string>
#include<cstring>

using namespace std;
ifstream fin;
const char *filename = "secretiostream.txt";
string inkeystring;//��Կstring
int stringlen=0;
int secretlen;//���ĳ���
int len;//��Կ����

char* Readfile(ifstream &fin, const char *filename);
char* inputkey();
void swap(unsigned char *ch1, unsigned char *ch2);

int main() {
	char *secret = Readfile(fin,filename);	
	char *inkey = inputkey();//inkey :�û��������Կ    
	char *tempiostream = new char[len];
	char *Kseret = new char[len];
	char *midseret = new char[len];
	char *initalsecret = new char[len];
	Kseret = productscrectiostream(inkey,len,tempiostream,secretlen);
	midseret = makeSecrect(Kseret,secret,secretlen);
	initalsecret = dealSecrect(Kseret, midseret,secretlen);
	cout <<"��Կ"<< Kseret << endl;
	cout <<"���ģ�"<< midseret << endl;
	cout << "���ܹ���"<<initalsecret << endl;
	
	cin.get();
	return 0;
}

char* Readfile(ifstream &fin, const char *filename)
{
	fin.open(filename, ios::out);
	if (!fin.is_open())
	{
		cout << "File open error" << endl;
		cin.get();
		return 0;
	}
	else
	{
		//��ȡ�ı��ַ����ȣ�����̬�����ַ���
		fin.seekg(0, ios::end);
		secretlen = fin.tellg();
		secretlen++;
		fin.seekg(ios::beg);
		char *S = new char[secretlen];
		//��ȡ�ı��ַ�
		fin.get(S, secretlen);
		return S;
	}
}
char* inputkey()
{
	cout << "Please input your secretKey:";
	getline(cin, inkeystring);

	int stringlen = strlen(inkeystring.c_str());
	char *secretkey = new char[stringlen + 1];
	for (int i = 0; i < stringlen; i++)
	{
		secretkey[i] = inkeystring[i];
	}
	secretkey[stringlen + 1] = '\0';
	len = stringlen + 1;
	return secretkey;
}
