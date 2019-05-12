#include<iostream>
using namespace std;

class temp
{
	private:
		int a1[5][5];
	public:
		temp(){
			for (int j=0;j<5;j++){
				for (int i=0;i<5;i++){
					a1[j][i]=0;
				}
			}
		}
		temp(int ar2[][5]){
			for (int i=0;i<5;i++){
				for (int j=0;j<5;j++){
					a1[i][j]=ar2[i][j];
				}
			}
		}
		void initialize(int arr[][5]){
			for (int i=0;i<5;i++){
				for (int j=0;j<5;j++){
					a1[i][j]=arr[i][j];
				}
			}
		}
		void print(){
			for (int i=0;i<5;i++){
				for (int j=0;j<5;j++){
					cout<<a1[i][j]<<"\t";
				}
				cout<<endl;
			}
		}
		int max(){
			int max=a1[0][0];
			for (int i=0;i<5;i++){
				for (int j=0;j<5;j++){
					if (max<a1[i][j]){
						max=a1[i][j];
					}
				}
			}
			return max;
		}
		
		void add(int b[][5]){
			for (int i=0;i<5;i++){
				for (int j=0;j<5;j++){
					a1[i][j]+=b[i][j];
				}
			}
		}
};

int  main()
{
	int test[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
	temp a;
	a.initialize(test);
	cout<<"Initialized values:-"<<endl;
	a.print();
	a.add(test);
	cout<<"Added values:-"<<endl;
	a.print();
	cout<<"Max= "<<a.max()<<endl;
//	temp a(test);
//	temp a;
//	a.print();
	return 0;
}

