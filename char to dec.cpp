#include<iostream>
#include<string>
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
	
}

int main()
{
	string a,b;
	cin>>a;
	int x;
	for (int i=0;i<a.length();i++)
	{
		x+=char_to_dec(a[i])*10;
	}
	cout<<"Answer : "<<x<<endl;
	return 0;
}
