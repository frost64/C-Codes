#include<iostream>
using namespace std;

class pointType
{
	private:
		int x,y;
	public:
		pointType(){
			x=0;
			y=0;
		}
		pointType(int a,int b){
			x=a;
			y=b;
		}
		
		void print(){
			cout<<"Value of x:"<<x<<endl;
			cout<<"Value of y:"<<y<<endl;
		}
		
		int get_x(){
			return x;
		}
		
		int get_y(){
			return y;
		}
		
		void set_coordinates(int w,int q){
			x=w;
			y=q;
		}
};

class circleType:public pointType
{
	private:
		int radius;
		int center;
	public:
		circleType():pointType()
		{
			radius=0;
			center=0;
		}
		circleType(int x,int y,int c,int r):pointType(x,y)
		{
			radius=r;
			center=c;
		}
		void print(){
			pointType::print();
			cout<<"Radius: "<<radius<<endl;
			cout<<"Center: "<<center<<endl;
		}
		float area(){
			float result=(3.14)*(radius*radius);
			return result;
		}
		
		float circumference(){
			float result=2*(3.14)*radius;
			return result;
		}
};

int  main()
{
	circleType a(1,2,3,4);
	a.print();
	cout<<"Area: "<<a.area()<<endl;
	cout<<"Circumference: "<<a.circumference()<<endl;
	return 0;
}

