#include<iostream>
using namespace std;

int main(){
	int rows;
	int col;
	cout<<"Enter Rows: ";
	cin>>rows;
	cout<<"Enter Cols: ";
	cin>>col;
	int **q;
	q=new int*[rows];
	for (int i=0;i<rows;i++){
		q[i]=new int[col];
	}
	for (int i=0;i<rows;i++){
		for (int j=0;j<col;j++){
			cout<<"Row "<<i<<" Col "<<j<<": ";
			cin>>q[i][j];
		}
	}
	for (int i=0;i<rows;i++){
		for (int j=0;j<col;j++){
			cout<<q[i][j]<<"   ";
		}
		cout<<endl;
	}
	return 0;
}
