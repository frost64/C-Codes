#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void input(){
	ifstream infile;
	infile.open("details.txt");
	while(!infile.eof()){
		string name;
		int mark1,mark2,mark3,mark4,mark5,result;
		infile>>name>>mark1>>mark2>>mark3>>mark4>>mark5;
		result=mark1+mark2+mark3+mark4+mark5;
		cout<<name<<" "<<mark1<<" "<<mark2<<" "<<mark3<<" "<<mark4<<" "<<mark5<<" "<<result<<endl;
	}
	infile.close();
}

int main (){
	input();
	system("pause");
	return 0;
}
