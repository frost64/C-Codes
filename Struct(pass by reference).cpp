#include<iostream>
#include<string>
using namespace std;

struct marks{
	int marks[10];
};

void print (marks &s1){
	for (int i=9;i>0-1;i--){
		cout<<s1.marks[i]<<endl;
	}
}

void max (marks &s1){
	int max=s1.marks[0];
	for (int i=0;i<10;i++){
		if(s1.marks[i]>max){
			max=s1.marks[i];
		}
	}
	cout<<"Max Value : "<<max;
}

void initialize(marks &s1){
	for(int i=0;i<10;i++){
		cout<<"Input quiz "<<i+1<<" marks : ";
		cin>>s1.marks[i];
	}
}

int main (){
	marks s1;
	initialize(s1);
	print (s1);
	max(s1);
	return 0;
}                                                                                                                                                  N
