#include<iostream>
using namespace std;

float get_median(int *q)
{
	int sum;
	float med;
	sum= *(q+4)+*(q+5);
	med=sum/2.0;
	return med;
}

int main()
{
	int *p;
	p=new int[10];
	for(int i=0;i<10;i++)
	{
		int x;
		cin>>x;
		*(p+i)=x;
	}
	cout<<"Median: "<<get_median(p)<<endl;
	return 0;
}
