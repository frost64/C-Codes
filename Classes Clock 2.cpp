#include<iostream>
#include<windows.h>
#include<string>
using namespace std;

class clock{
	private:
		int hour;
		int minute;
		int second;
	public:
		clock(int x=0,int y=0,int z=0){              //functions with default values;
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
			cout<<"Time : "<<hour<<":"<<minute<<":"<<second;
		}
		void incsec(){
			if (second<59){
			second++;
		}
			else{
				incmin();
				second=0;
			}
		}
		void incmin(){
			if(minute<59){
				minute++;
			}
			else{
				inchour();
				minute=0;
			}
		}
		void inchour(){
			if(hour<24){
				hour++;	
			}
			else{
				hour=0;
			}
		}
};

int main (){
	clock s;
	//clock s(10,12,14);
	//s.set();
	while(1){
		s.display();
		s.incsec();
		Sleep(1000);
		cout<<"\r";
	}
	
	return 0;
}
