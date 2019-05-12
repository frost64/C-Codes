#include<iostream>
#include<fstream>
#include<string>
using namespace std;


void print(int rows,int col,int **arr){
		for (int i=0;i<rows;i++){
			for(int j=0;j<col;j++){
				cout<<*(*(arr+i)+j)<<"   ";
			}
			cout<<endl;
		}
	}
	
	
int main(){
	ifstream infile("data.txt");
	int rows=0;
	float t;
	while(!infile.eof()){
		string x;
		getline(infile,x);
		rows++;
	}
	infile.close();
	int col=1;
	ifstream infile2("data.txt");
	string a;
	getline(infile2,a);
	infile2.close();
	int n=a.length();
	for(int i=0;i<n;i++){
		if(a[i]==' '){
			col++;	
		}
	}
	/////////////////////////////////////////////
	int **q;
	q=new int*[rows];
	for (int i=0;i<rows;i++){
		*(q+i)=new int[col];
	}
	ifstream infile3("data.txt");
	for (int i=0;i<rows;i++){
		for(int j=0;j<col;j++){
			infile3>>*(*(q+i)+j);
		}
	}
	infile3.close();
	/////////////////////////////////////////////
	print(rows,col,q);
	
	return 0;
}
