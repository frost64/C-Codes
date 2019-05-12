#include<iostream>
#include<string>
#include<fstream>
using namespace std;
string decoder(int num,string str);

struct data{
	string platfrm;
	string name;
	string id;
	string phone;
	string pass;
};

int main(){
	string username,userpass;
	cout<<"Enter Username and Password !\n";
	cout<<"\n--------------------------------\n\n";
	cout<<"Username : ";
	cin>>username;
	cout<<"Password : ";
	cin>>userpass;
	string defpass="gypojF<:";
	string defuser="fxonifmrji;9";
	cout<<decoder(5,defuser)<<endl;
	cout<<decoder(6,defpass)<<endl;
	if(username==decoder(5,defuser) && userpass==decoder(6,defpass)){
		cout<<"\n--------------------------------\n\n";
		int flag=0;
		data vault;
		string platformin,email;
		cout<<"Enter Platform : ";
		cin>>platformin;
		cout<<"Enter Email Id : ";
		cin>>email;
		cout<<"\n-------------DETAILS-------------\n\n";
		ifstream infile;
		infile.open("details.txt");
		while(infile){
			string array[6];
			string x;
			for (int i=0;i<6;i++){
				getline(infile,x);
				array[i]=x;
			}
			for (int i=0;i<5;i++){
				int value;
				int code;
				if (i==0){
					code=array[i].length();
				}
				if (decoder(code+2,array[0])==platformin && decoder(code+3,array[2])==email){
					vault.platfrm=decoder(code+2,array[0]);
					vault.name=decoder(code-2,array[1]);
					vault.id=decoder(code+3,array[2]);
					vault.phone=decoder(code-3,array[3]);
					vault.pass=decoder(code+1,array[4]);
					flag=1;
				}
			}		
		}
		if (flag==0){
			cout<<"Invalid User!";
		}
		else{
			cout<<"Platform : "<<vault.platfrm<<"\nName     : "<<vault.name<<"\nEmail/id : "<<vault.id<<"\nPhone No : "<<vault.phone<<"\nPassword : "<<vault.pass;
		}
	}
	else{
		cout<<"Invalid Username or Password !";
	}
		return 0;
}

string decoder(int num,string str){
	string final="";
	int number;
	number=str.length();
	char result[number];
	for (int i=0;i<number;i++){
		result[i]=char(int(str[i]-num));
	}
	for (int i=0;i<number;i++){
		final+=result[i];
	}
	return final;
}
