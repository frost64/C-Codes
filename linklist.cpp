#include<iostream>
using namespace std;

struct Node
{
	string name;
	int roll;
	Node *ptr;
};

class data
{
	public:
		Node *head,*tail;
		int size;
		data();
		void startInsert();
		void endInsert();
		void indexInsert(int index);
		void print();
//		~data();
};

data::data()
{
	head=tail=NULL;
	size=0;
}

void data::startInsert()
{
	if(head==NULL)
	{
		Node *temp=new Node;
		cout<<"Enter Name:";
		cin>>temp->name;
		cout<<"Roll No:";
		cin>>temp->roll;
		temp->ptr=NULL;
		head=tail=temp;
	}
	else
	{
		Node *temp2=new Node;
		cout<<"Enter Name:";
		cin>>temp2->name;
		cout<<"Roll No:";
		cin>>temp2->roll;
		temp2->ptr=NULL;
		temp2->ptr=head;
		head=temp2;
	}
	size++;
	return;
}

void data::endInsert()
{
	if(head==NULL)
	{
		Node *temp=new Node;
		cout<<"Enter Name:";
		cin>>temp->name;
		cout<<"Roll No:";
		cin>>temp->roll;
		temp->ptr=NULL;
		head=tail=temp;
	}
	else
	{
		Node *temp2=new Node;
		cout<<"Enter Name:";
		cin>>temp2->name;
		cout<<"Roll No:";
		cin>>temp2->roll;
		temp2->ptr=NULL;
		tail->ptr=temp2;
		tail=temp2;
	}
}

void data::indexInsert(int index)
{
	if(index<size and index>=0)
	{
		int ind=0;
		for ()
	}
	else
	{
		cout<<"Index does not exists!"<<endl;
	}
}

void data::print()
{
	Node *pt;
	pt=head;
	while(pt!=NULL)
	{
		cout<<pt->name<<"    "<<pt->roll<<endl;
		pt=pt->ptr;
	}
	return;
}

/*data::~data()
{
	
}*/

int main()
{
	data obj;
	obj.startInsert();
	obj.startInsert();
	obj.startInsert();
	obj.endInsert();
	obj.print();
	cout<<"Size: "<<obj.size;
	return 0;
}
