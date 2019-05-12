#include<iostream>
#include<string>
using namespace std;

class test{
	private:
		string a="Hello World";
	public:
		virtual void print(){    //if we remove virtual from here it will only call print function of class test
			cout<<a<<endl;
		}
};

class a:public test{
	private:
		string b="Welcome";
	public:
		void print(){
			test::print();
			cout<<b<<endl;
		}
};

int main(){
	test *a4=new a();     //Dynamic object
	a4->print();		  //Dynamically calls a function
	
	
//	test *a2=new test();
//	a2->print();
//	a *a3=new a();
//	a3->print();
	return 0;
}
