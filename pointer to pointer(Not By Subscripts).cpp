#include<iostream>
using namespace std;

int main(){
	int x,y;
	cin>>x>>y;
	int **q;
	q=new int*[x];
	for (int i=0;i<x;i++){
		*(q+i)=new int[y];
	}
	for (int i=0;i<x;i++){
		for (int j=0;j<y;j++){
			cout<<"Row "<<i<<" Col "<<j<<":";
			cin>>(*(*(q+i)+j));
		}
	}
	
	for (int i=0;i<x;i++){
		for (int j=0;j<y;j++){
			cout<<(*(*(q+i)+j))<<"   ";
		}
		cout<<endl;
	}
	return 0;
}
