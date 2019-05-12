#include <iostream>
#include <string>
#include <fstream>
using namespace std;

template<class var>
var fun(var a,var b)
{
	if(a>b)
	{
		return a;
	}
	return b;
}

int main()
{
	cout<<"Int Max: "<<fun(12,2)<<endl;
	cout<<"Char Max: "<<fun('a','b')<<endl;
	cout<<"Double Max: "<<fun(12.3,12.4)<<endl;
	cout<<"String Max: "<<fun("Hello","World!")<<endl;
	system("Pause");
	return 0;
}
