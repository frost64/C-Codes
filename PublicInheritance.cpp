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
		float radius;
		float center;
	public:
		circleType():pointType()
		{
			radius=0;
			center=0;
		}
		circleType(int x,int y,float c,float r):pointType(x,y)
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

class cylinderType:public circleType
{
	private:
		float height;
	public:
		cylinderType():circleType()
		{
			height=0;
		}
		cylinderType(int x,int y,float c,float r,float h):circleType(x,y,c,r)
		{
			height=h;
		}
		void print(){
			circleType::print();
			cout<<"Height: "<<height<<endl;
		}
		float area(){
			float result=(circleType::circumference()*height)+(circleType::area());
			return result;
		}
		float volume(){
			float result=circleType::area()*height;
			return result;
		}
};

int  main()
{
//	circleType a(1,2,3,4);
//	a.print();
//	cout<<"Area: "<<a.area()<<endl;
//	cout<<"Circumference: "<<a.circumference()<<endl;
	
	cylinderType a(1,2,3,4,5);
	a.print();
	cout<<"Area of Cylinder: "<<a.area()<<endl;
	cout<<"Volume of Cylinder: "<<a.volume()<<endl;
//	pointType b;
//	cout<<b.get_x();
	
	return 0;
}

