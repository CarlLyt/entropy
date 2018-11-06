#include"string"
#include"iostream"
using namespace std;
template <typename R>
void enCode(R input, int len)
{
	cout << "Your string is ===>>>>" << input << endl;
	int i = 0;
	while (i <= len) 
	{
		if (input[i] <= 'z' || input[i] >= 'a')
		{ 			
			input[i] = ('a' + (((input[i]-'a') * 11 + 23) % 26));
			//cout << input[i] << endl;
		}
		i++;
	}
	//cout << "Over!" << endl;
	cout << "After transform your string is ===>>>>" << input << endl;
	
}

template <typename R>
void deCode(R input, int len)
{
	cout << "DEcode   Your string is ===>>>>" << input << endl;
	int i = 0;
	while (i <= len)
	{
		if (input[i] <= 'z' || input[i] >= 'a')
		{
			int temp = input[i] - 'a'-23;
			
				if (temp > 0)
				{
					input[i] = 'a' + ((19 * temp ) % 26);
				}
				else
					input[i] = 'a' + 26 + ((19 * temp ) % 26);
				//cout << input[i] << endl;

		}
		i++;
	}
	cout << "After decode transform your string is ===>>>>" << input << endl;
}
