#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class clock{
	private:
		int hour;
		int minute;
		int second;
	public:
		clock(){
			hour=0;
			minute=0;
			second=0;
		}
		clock(int x,int y,int z){
			hour=x;
			minute=y;
			second=z;
		}
		void set(){
			int h,m,s;
			cout<<"Enter Hours: ";
			cin>>h;
			cout<<"Enter Minutes: ";
			cin>>m;
			cout<<"Enter seconds: ";
			cin>>s;
			hour=h;
			minute=m;
			second=s;
		}
		void display(){
			cout<<"Time : "<<hour<<":"<<minute<<":"<<second<<endl;
		}
};

int main (){
	clock s(10,12,14);
	s.set();
	s.display();
	return 0;
}
