#include<iostream>
using namespace std;

int third_Max(int *p)
{
	for (int i=0;i<3;i++)
	{
		int max=*(p+0);
		for (int j=0;j<10;j++)
		{
			if(*(p+j)>max)
			{
				max=*(p+j);
			}
		}
		for (int m=0;m<10;m++)
		{
			if (*(p+m)==max)
			{
				*(p+m)=0;
			}
		}

		if(i==1)
		{
			return max;
		}
	}
}

int main()
{
	int *q;
	q=new int [10];
	for (int i=0;i<10;i++)
	{
		int x;
		cin>>x;
		*(q+i)=x;
	}

	cout<<"Third Max Value: "<<third_Max(q)<<endl;
}
