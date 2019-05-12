#include<iostream>
using namespace std;

struct Node
{
	string id;
	Node *ptrr;
};

class linky
{
	public:
		Node *head,*tail;
		linky();
		~linky();
		void insertion();
		void print_link();
};

linky::linky(){
	head=tail=NULL;
}

linky::~linky(){
	Node *temp;
	temp=head;
	while(temp!=NULL){
		head=head->ptrr;
		delete temp;
		temp=head;
	}
	delete head;
	cout<<"DONE ALL DELETE !!!"<<endl;
}

void linky::insertion(){
	Node *abc=new Node;
	cout<<"Enter values : ";
	cin>>abc->id;
	abc->ptrr=NULL;
	
	if(!head){
		head=tail=abc;
		return;
	}
	
	tail->ptrr=abc;
	tail=abc;
	return;
}

void linky::print_link(){
	Node *temp;
	temp=head;
	while(temp!=NULL){
		cout<<temp->id<<endl;
		temp=temp->ptrr;
	}
	return;
}

int main()
{
	linky ln;
	ln.insertion();
	ln.insertion();
	ln.insertion();
	ln.insertion();
	ln.insertion();
	ln.print_link();
	
	return 0;
}
