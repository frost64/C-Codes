#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream infile ("khan.txt");
	while(infile)
	{
		string a;
		getline(infile,a);
		int n=a.length();
		for (int i=0;i<n-1;i++)
		{
			if(a[i]==' ' && a[i+1]==' ')
			{
				a[i]='\0';
			}
		}
		int total=1;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]==' ')
			{
				total++;
			}
		}
		if(a!="")
		{
			cout<<"Numbers in line: "<<total<<endl;
		}
	}
	return 0;
}
