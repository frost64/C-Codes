#include<iostream>
using namespace std;

class temp
{
	private:
		int a1[5];
	public:
		temp(){
			for (int i=0;i<5;i++){
				a1[i]=0;
			}
		}
		temp(int ar2[]){
			for (int i=0;i<5;i++){
				a1[i]=ar2[i];
			}
		}
		void initialize(int arr[]){
			for (int i=0;i<5;i++){
				a1[i]=arr[i];
		}
	}
		void print(){
			for (int i=0;i<5;i++){
				cout<<a1[i]<<endl;
			}
		}
		int max(){
			int max=a1[0];
			for (int i=0;i<5;i++){
				if (max<a1[i]){
					max=a1[i];
				}
			}
			return max;
		}
		
		void add(int b[]){
			for (int i=0;i<5;i++){
				a1[i]+=b[i];
			}
		}
};

int  main()
{
	int test[5]={1,2,3,4,5};
	temp a;
	a.initialize(test);
	a.print();
	a.add(test);
	a.print();
	cout<<"Max= "<<a.max()<<endl;
//	temp a(test);
//	temp a;
//	a.print();
	return 0;
}

