#include<iostream>
#include<string>
#include<fstream>
using namespace std;
string encoder(int num,string str);


struct details{
	string platform;
	string name;
	string id;
	string phone;
	string password;
};

int main(){
	details person;
	cout<<"Enter Platform : ";
	getline(cin,person.platform);
	cout<<"Enter Name : ";
	getline(cin,person.name);
	cout<<"Enter Id : ";
	getline(cin,person.id);
	cout<<"Enter Phone Number : ";
	getline(cin,person.phone);
	cout<<"Enter Password : ";
	getline(cin,person.password);
	int code;
	code=person.platform.length();
	ofstream outfile;
	outfile.open("details.txt",ios::app);
	outfile<<encoder(code+2,person.platform)<<endl<<encoder(code-2,person.name)<<endl<<encoder(code+3,person.id)<<endl<<encoder(code-3,person.phone)<<endl<<encoder(code+1,person.password)<<"\n\n";
	return 0;
}

string encoder(int num,string str){
	string final="";
	int number;
	number=str.length();
	char result[number];
	for (int i=0;i<number;i++){
		result[i]=char(int(str[i]+num));
	}
	for (int i=0;i<number;i++){
		final+=result[i];
	}
	return final;
}
