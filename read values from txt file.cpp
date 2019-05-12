#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void read(string array[100]){
	string name,full;
	cout<<"Enter File Name : ";
	getline(cin,name);
	full=name+".txt";
	string path="C:\\Users\\Asjid Ahmed\\Desktop\\asjid\\"+full;
	ifstream infile;
	infile.open(path.c_str());
	int count=0;
	while(infile){
		string x;
		infile>>x;
		array[count]=x;
		count+=1;
	}
}

int main(){
	string array[100];
	read(array);
	for (int i=0;i<7;i++){
		cout<<array[i]<<endl;
	}
	return 0;
}
