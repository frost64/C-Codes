/*
Name:Asjid Ahmed.
Date:02-12-2018.
Description:"This Function will Calculate nth maximum value from an array of nth size."
Note:"It will consider same values as one. e.g. if array given is {1,1,2,2,3,4,5,5,5,6} then
the returned value for 3 max will be 4."
*/

#include<iostream>
using namespace std;

int x_max(int *q,int sz,int deg)
{
	int min=*(q+0);
	for(int w=0;w<sz;w++)
	{	
		if( *(q+w) < min )
		{
			min=*(q+w);
		}
	}
	for(int i=0;i<deg;i++)
	{
		int max=*(q+0);
		for(int j=0;j<sz;j++)
		{
			if( *(q+j) > max  )
			{
				max=*(q+j);
			}
		}
		if(i<deg-1)
		{
			for (int k=0;k<sz;k++)
			{
				if (*(q+k)==max)
				{
					*(q+k)=min;
				}
			}
		}
		else if(i==deg-1)
		{
			return max;
		}
	}
}

int main()
{
	int *p;
	int size;
	int maxd;
	cout<<"Maximum Degree: ";
	cin>>maxd; 
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
	if(maxd==1)
	{
		prefix="st";
	}
	else if(maxd==2)
	{
		prefix="nd";
	}
	else if(maxd==3)
	{
		prefix="rd";
	}
	else if(maxd>3)
	{
		prefix="th";
	}
	cout<<maxd<<prefix<<" Maximum: "<<x_max(p,size,maxd)<<endl;
	return 0;
}
