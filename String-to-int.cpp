#include<iostream>
using namespace std;

void strr(string str)
{
	int result=0,w=1;
	for (int i=str.length()-1;i>=0;i--)
	{
		int x=str[i]-48;
		result+=x*w;
		w=w*10;
	}
	cout<<result<<endl;
}

int main()
{
	strr("12345");
	return 0;
}
