#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int char_to_dec(char b)
{
	int a;
	a=b;
	a=	static_cast<short>(b) - 48;
	return a;

}

int string_to_int(string str)
{
	int x;
	int bit=str.length()-1;
	for (int i=0;i<str.length();i++)
	{
		int multiplier=10;
		multiplier=pow(multiplier,bit);
		x+=char_to_dec(str[i])*multiplier;
		bit--;
	}
	return x;
}

int main()
{
	string a;
	cin>>a;
	cout<<string_to_int(a)<<endl;
	
	return 0;
}
