#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void ali(){
	cout<<"This is first function!"<<endl;
}

void ali(string x,int y){
	cout<<x<<y<<endl;
}

string ali(string first,string last){
	string result="";
	result=first+" "+last;
	return result;
}

int main(){
	string x,first,last;
	int y;
	cout<<"Enter string :";
	getline(cin,x);
	cout<<"Enter integer : ";
	cin>>y;
	cout<<"Enter first name : ";
	cin >>first;
	cout <<"Enter last name : ";
	cin>>last;
	cout<<ali(first ,last)<<endl;
	ali();
	ali(x,y);
	return 0;
}
