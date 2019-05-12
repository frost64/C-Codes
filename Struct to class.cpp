#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class vehicle{
	public:
	string name;
	string parts[5];
	int price;
	void initialize(){
		cout<<"Enter Vehicle Name : ";
		cin>>name;
		for (int i=0;i<5;i++){
			cout<<"Enter Part "<<i+1<<" : ";
			cin>>parts[i];
		}
		cout<<"Enter Price of Vehicle : ";
		cin>>price;
	}
	void print(){
		cout<<name<<endl;
		for (int i=0;i<5;i++){
			cout<<parts[i]<<endl;
		}
		cout<<price<<endl;
	}
};

int main(){
	vehicle v1,v2,v3;
	v1.initialize();
	v2.initialize();
	v3.name=v1.name;
	v1.name=v2.name;
	v2.name=v3.name;
	for (int i=0;i<5;i++){
		v3.parts[i]=v1.parts[i];
		v1.parts[i]=v2.parts[i];
		v2.parts[i]=v3.parts[i];
	}
	v3.price=v1.price;
	v1.price=v2.price;	v2.price=v3.price;
	
	v1.print();
	v2.print();
	return 0;
}
