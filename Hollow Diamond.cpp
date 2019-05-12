#include<iostream>
using namespace std;


int main(){
	int size;
	cout<<"Enter Size Of Diamond: ";
	cin>>size;
    for(int i=1; i<=size; i++){
        for(int j=i-1; j<=size; j++)
        {
        	if (j==size){
            	cout<<"*";
        	}
			else{
				cout<<" ";
			}
        }
        for(int j=1; j<i-1; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<i; j++)
        {
            cout<<" ";
        }
        for(int j=i; j<=size; j++)
        {
        	if (j!=i){
            	cout<<" ";
        	}
        	else if(j!=1){
        		cout<<"*";
			}
        }
        cout<<endl;
    }
    
    ////////////////
    for(int i=size+1; i>=1; i--){
        for(int j=i-1; j<=size+1; j++)
        {
        	if (j==size){
            	cout<<"*";
        	}
        	else{
        		cout<<" ";
			}
        }
        for(int j=2; j<i; j++)
        {
            cout<<" ";
        }
        for(int j=3; j<i+1; j++)
        {
            cout<<" ";
        }
        for(int j=i; j<=size+1; j++)
        {
        	if (j!=i){
            	cout<<" ";
        	}
        	else if(j!=1){
        		cout<<"*";
			}
        }
        cout<<endl;
    }
    return 0;
}
