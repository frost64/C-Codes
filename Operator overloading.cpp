/*
Name:Asjid Ahmed.
Details: Different types of operator over-loadings in a class with the name dist1 which has length in feet and inches.
Date:16-12-2018.
*/

#include<iostream>
using namespace std;

class dist1
{
	private:
		double feet;
		double inches;
	public:
//		Default Constructor.
		dist1()
		{
			feet=0;
			inches=0;
		}

//		Constructor with Parameters.
		dist1(double x,double y)
		{
			feet=x;
			inches=y;
		}

//		Function to set data manually.
		void setData()
		{
			cout<<"Enter length in Feet: ";
			cin>>feet;
			cout<<"Enter length in Inches: ";
			cin>>inches;
		}

//		Function to display data.
		void show()
		{
			cout<<"Lnegth in Feet: "<<feet<<endl;
			cout<<"Length in Inches: "<<inches<<endl;
		}
///////////////////////////////////////////////////////////////////////////////////////
//		Arithmatic opertors over-loading.

	//		i) Binary arithmatic operators.

		//		operator '+'
		dist1 operator +(const dist1 &d1)
		{
			dist1 temp;
			temp.feet=feet+d1.feet;
			temp.inches=inches+d1.inches;
			return temp;
		}

		//		operator '-'
		dist1 operator -(const dist1 &d1)
		{
			dist1 temp;
			temp.feet=feet-d1.feet;
			temp.inches=inches-d1.inches;
			return temp;
		}

		//		operator '/'
		dist1 operator /(const dist1 &d1)
		{
			dist1 temp;
			temp.feet=feet/d1.feet;
			temp.inches=inches/d1.inches;
			return temp;
		}

		//		operator '*'
		dist1 operator *(const dist1 &d1)
		{
			dist1 temp;
			temp.feet=feet*d1.feet;
			temp.inches=inches*d1.inches;
			return temp;
		}

		//		This operator will only be used for functions with integers as parameters.
		/*
		dist1 operator %(const dist1 &d1)
		{
			dist1 temp;
			temp.feet=feet%d1.feet;
			temp.inches=inches%d1.inches;
			return temp;
		}
		*/

	//		ii) Unary Operators over-loading

		//		-pre-increment/decrement.

			//		operator '++x'
		void operator ++()
		{
			++feet;
			++inches;
		}

			//		operator '--x'
		void operator --()
		{
			--feet;
			--inches;
		}

		//		-post-increment/decrement.

			//		operator 'x++'
		void operator ++(int)
		{
			feet++;
			inches++;
		}
			//		operator 'x--'
		void operator --(int)
		{
			feet--;
			inches--;
		}


//////////////////////////////////////////////////////////////////////////////////////////


//		Assignment operator over-loading.
		//		operator '='
		void operator =(const dist1 &d1)
		{
			feet=d1.feet;
			inches=d1.inches;
		}

		//		operator '+='
		void operator +=(const dist1 &d1)
		{
			feet+=d1.feet;
			inches+=d1.inches;
		}

		//		operator '-='
		void operator -=(const dist1 &d1)
		{
			feet-=d1.feet;
			inches-=d1.inches;
		}

		//		operator '*='
		void operator *=(const dist1 &d1)
		{
			feet*=d1.feet;
			inches*=d1.inches;
		}

		//		operator '/='
		void operator /=(const dist1 &d1)
		{
			feet/=d1.feet;
			inches/=d1.inches;
		}

//////////////////////////////////////////////////////////////////////////////////////////

//		Relational Operators over-loading.
	//		operator '=='
		bool operator ==(const dist1 &d1)
		{
			if (feet==d1.feet && inches==d1.inches)
			{
				return true;
			}
			return false;
		}
	//		operator '<='
		bool operator <=(const dist1 &d1)
		{
			if (feet<=d1.feet && inches<=d1.inches)
			{
				return true;
			}
			return false;
		}
	//		operator '>='
		bool operator >=(const dist1 &d1)
		{
			if (feet>=d1.feet && inches>=d1.inches)
			{
				return true;
			}
			return false;
		}
/////////////////////////////////////////////////////////////////////////////////////////////

//		iostream operators over-loading.
	//		i) Output stream over-loading.
		//		operator '<<'
		friend ostream &operator <<(ostream &print,const dist1 &d1)
		{
			print<<"Length in Feet: "<<d1.feet<<endl<<"Length in Inches: "<<d1.inches<<endl;
			return print;
		}
	//		ii) Input stream  over-loading.
		//		operator '>>'
		friend istream &operator >>(istream &input,dist1 &d1)
		{
			input>>d1.feet>>d1.inches;
			return input;
		}
///////////////////////////////////////////////////////////////////////////////////////////
};

int main()
{
//	For Default Constructor.

	dist1 obj;
	obj.show();

//////////////////////////////////////////////

//  For Constructor with Parameters.

	//dist1 obj(5.4,64.8);
	//obj.show();

/////////////////////////////////////////////

//	For Function setData().

//	dist1 obj;
//	obj.setData();
//	obj.show();

/////////////////////////////////////////////

//	For over-loading (+,-,/,*)

//	dist1 obj1(1.1,64.3);
//	dist1 obj2(2.2,128.6);
//	dist1 sum(0,0);
//	sum=obj1 @sign@ obj2;    //Replace keyword '@sign@' with operator sign.
//	sum.show();

/////////////////////////////////////////////

//	For over-loading (++obj , --obj , obj++ , obj--)

//	dist1 obj(2.4,60.5);
//	@sign@ ;				   //Replace keyword '@sign@' with operator sign.
//	obj.show();

/////////////////////////////////////////////

//	For over-loading (= , += , -= , /= , *=)

//	dist1 obj1(1.23,2.34),obj2(3.45,4.56);
//	obj1 @sign@ obj2;        //Replace keyword '@sign@' with operator sign.
//	obj1.show();

/////////////////////////////////////////////

//	For over-loading (== , >= , <=)

//	dist1 obj1(1.3,5.7),obj2(1.2,5.6);
//	if((obj1 @sign@ obj2)==true)      //Replace keyword '@sign@' with operator sign.
//	{
//		cout<<"Comparison: True";
//	}
//	else
//	{
//		cout<<"Comparison: False";
//	}

/////////////////////////////////////////////

//	For over-loading (>> , <<)

//	dist1 obj(2,3);
//	cout<<"Please Enter Length in Feet and Inches Respectively: "<<endl;
//	cin>>obj;
//	cout<<obj;

/////////////////////////////////////////////
	system("Pause");
	return 0;
}
