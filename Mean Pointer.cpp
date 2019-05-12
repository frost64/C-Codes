#include<iostream>
using namespace std;

float get_mean(int *q)
{
	float mean;
	float sum=0;
	for (int i=0;i<10;i++)
	{
		sum+=*(q+i);
	}
	mean=sum/10.0;
	return mean;
}

int main()
{
	int *p;
	p=new int[10];
	for (int i=0;i<10;i++)
	{
		int x;
		cin>>x;
		*(p+i)=x;
	}

	cout<<"Mean: "<<get_mean(p)<<endl;
	return 0;
}
