#include<iostream>
using namespace std;

struct person
{
	string name;
	int roll;
	person *next;
};

class stack
{
	public:
		int size;
		person *top;
		///////////////////////////////////////////////////////////////////////////////////////////
		stack()
		{
			size=0;
			top=NULL;
		}
		//////////////////////////////////////////////////////////////////////////////////////////
		bool isEmpty()
		{
			return top==NULL;
		}
		//////////////////////////////////////////////////////////////////////////////////////////
		void push(string NewName,int NewRoll)
		{
			person *temp=new person;
			temp->name=NewName;
			temp->roll=NewRoll;
			temp->next=NULL;
			if(isEmpty())
			{
				top=temp;
			}
			else
			{
				temp->next=top;
				top=temp;
			}
			cout<<"Node Pushed to stack!"<<endl;
			size++;
			return;
		}
		/////////////////////////////////////////////////////////////////////////////////////////
		void pop()
		{
			if(isEmpty())
			{
				cout<<"The Stack is Empty!"<<endl;
				return;
			}
			else
			{
				person *temp;
				temp=top;
				top=top->next;
				temp->next=NULL;
				delete temp;
				cout<<"Value Popped Successfully!"<<endl;
			}
			size--;
			return;
		}
		/////////////////////////////////////////////////////////////////////////////////////////
		void peek()
		{
			if(isEmpty())
			{
				cout<<"There is nothing to peek!"<<endl;
				return;
			}
			else
			{
				cout<<"Name: "<<top->name<<endl;
				cout<<"Roll No: "<<top->roll<<endl;
			}
			return;
		}
		void showStack()
		{
			if(isEmpty())
			{
				cout<<"Stack is Empty!"<<endl;
			}
			else
			{
				person *print;
				print=top;
				cout<<"\t------------------------------\n";
				cout<<"\t\t<STACK>\n"<<endl;
				while(print!=NULL)
				{
					cout<<"\t\t"<<print->name<<endl;
					cout<<"\t\t"<<print->roll<<endl;
					if(print->next!=NULL)
					{
						cout<<"\t\t"<<"   ||   "<<endl;
						cout<<"\t\t"<<"   \\/   "<<endl;
					}
					print=print->next;
				}
				cout<<"\t------------------------------\n";
			}
		}
		
};

int main()
{
	stack anyy;
	anyy.push("Asjid Ahmed",6124);
	anyy.push("Ali Khan",6125);
	anyy.push("Arslan Jan",6126);
	anyy.push("Bilal Saeed",6127);
	anyy.push("Kamran Ali",6128);
	anyy.push("Shamoon Awan",6129);
	anyy.peek();
	cout<<anyy.isEmpty()<<endl;
	anyy.pop();
	anyy.peek();
	cout<<anyy.isEmpty()<<endl;
	anyy.showStack();
	return 0;
}
