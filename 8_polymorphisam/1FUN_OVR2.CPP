#include<iostream.h>
#include<conio.h>
//funoverloding in area
class A
{
	public:

	A(int a)
	{
		float c;
		float PI;
		PI=3.14;
		c=PI*(a*a);
		cout<<"area of circle="<<c<<endl;
	}
	A(int a,int b)
	{
		int d;
		d=a*b;
		cout<<"area of rectangle="<<d<<endl;
	}
	A(int a,float b)
	{
		int e;
		e=(a*b)/2;
		cout<<"area of triangle="<<e<<endl;
	}
	A(float a)
	{
		int f;
		f=a*a;
		cout<<"area of square="<<f<<endl;
	}
};
void main()
{
	clrscr();
	A x1(5),x2(2,2),x3(5,2.5f),x4(2.5f);
	getch();
}
