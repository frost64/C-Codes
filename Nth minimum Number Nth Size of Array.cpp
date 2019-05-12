/*
Name:Asjid Ahmed.
Date:02-12-2018.
Description:"This Function will Calculate nth minimum value from an array of nth size."
Note:"It will consider same values as one. e.g. if array given is {1,1,2,2,3,4,5,5,5,6} then
the returned value for 3 min will be 3."
*/

#include<iostream>
using namespace std;

int x_min(int *q,int sz,int deg)
{
	int max=*(q+0);
	for(int w=0;w<sz;w++)
	{	
		if( *(q+w) > max )
		{
			max=*(q+w);
		}
	}
	for(int i=0;i<deg;i++)
	{
		int min=*(q+0);
		for(int j=0;j<sz;j++)
		{
			if( *(q+j) < min  )
			{
				min=*(q+j);
			}
		}
		if(i<deg-1)
		{
			for (int k=0;k<sz;k++)
			{
				if (*(q+k)==min)
				{
					*(q+k)=max;
				}
			}
		}
		else if(i==deg-1)
		{
			return min;
		}
	}
}

int main()
{
	int *p;
	int size;
	int mind;
	cout<<"Minimum Degree: ";
	cin>>mind; 
	cout<<"Enter Size: ";
	cin>>size;
	p=new int[size];
	for(int i=0;i<size;i++)
	{
		int x;
		cin>>x;
		*(p+i)=x;
	}
	string prefix;
	if(mind==1)
	{
		prefix="st";
	}
	else if(mind==2)
	{
		prefix="nd";
	}
	else if(mind==3)
	{
		prefix="rd";
	}
	else if(mind>3)
	{
		prefix="th";
	}
	cout<<mind<<prefix<<" Minimum: "<<x_min(p,size,mind)<<endl;
	return 0;
}
