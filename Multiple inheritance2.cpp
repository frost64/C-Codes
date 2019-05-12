#include<iostream>
#include<string>
using namespace std;
class person;
class company;
class employee;
class project;


class person{
	private:
		string a;
	public:
		void print(){
			cout<<"Person Class!"<<endl;
		}
};

class company{
	private:
		string b;
	public:
		virtual void print(){
			cout<<"Company Class!"<<endl;
		}
};

class employee:public company,public person
{
	private:
		string c;
	public:
		void print(){
			cout<<"Employee Class!"<<endl;
		}
};




class project:public employee{
	private:
		string d;
	public:
		void print(){
			cout<<"Project Class!"<<endl;
	}
};



void fun_polymorph(company *p){
	p -> print();
}

int main(){

	project *e=new project();
	
	fun_polymorph(e);
	return 0;
}

