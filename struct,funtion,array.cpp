#include<iostream>
#include<string>
using namespace std;
	struct parts{
		string part1;
		string part2;
		string part3;
	};
	
struct details{
	string id;
	string vehicle[5];
	parts d;
	void end(int x){
		if (x==1){
			cout<<"The process is finished !";
		}
		else{
			cout<<"The process is continued !";
		}
	}
};

int main (){
	
	details me;
	cout<<"Enter id : ";
	cin>>me.id;
	for (int i=0;i<5;i++){
		cout<<"Enter vehicle No "<<i+1<<": ";
		cin>>me.vehicle[i];
	}
	cout<<"Enter Part 1 : ";
	cin>>me.d.part1;
	cout<<"Enter Part 2 : ";
	cin>>me.d.part2;
	cout<<"Enter Part 3 : ";
	cin>>me.d.part3;
	me.end(0);

	return 0;
}
