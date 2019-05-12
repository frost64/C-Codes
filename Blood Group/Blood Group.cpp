#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct details{
	string id[10];
	string bg[10];
};


void cinn(details &abc){
	ifstream infile;
	infile.open("asjid.txt");	
	for (int i=0;i<10;i++){
			infile>>abc.id[i]>>abc.bg[i];
	}
	infile.close();
}

void print (details &abc,string x){
	for (int i=0;i<10;i++){
		if(x==abc.bg[i]){
			cout<<"ID : "<<abc.id[i]<<"     Blood Group : "<<abc.bg[i]<<endl;
		}
	}
}

void counter (details &abc,string x){
	int count=0;
	for (int i=0;i<10;i++){
		if(x==abc.bg[i]){
			count+=1;
		}
	}
	cout<<"Number of Person : "<<count;
}


int main(){
	string x;
	cout<<"Enter Blood Group : ";
	cin>>x;
	details abc;
	cinn(abc);
	print(abc,x);
	counter(abc,x);
	return 0;
}


