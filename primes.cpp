#include<iostream>
using namespace std;
bool isPrime(int n);

int main()
{
	cout<<"Enter the Interval:\n";
	int first,last;
	cin>>first;
	cin>>last;
	int temp=0;
	cout<<"Prime Numbers: ";
	for (int i=first;i<last+1;i++)
	{
		if (isPrime(i)==true)
		{
			temp=i;
			cout<<i<<' ';
		}
	}
	cout<<endl;
	cout<<"Largest Prime: "<<temp<<endl;
	return 0;
}

bool isPrime(int n)
{
	if(n==1)
	{
		return false;
		
	}
	for (int i=2;i<n;i++)
	{
		if (n%i==0)
		{
			return false;
		}
	}
	return true;
}
