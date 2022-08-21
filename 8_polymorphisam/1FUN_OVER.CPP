#include<iostream.h>
#include<conio.h>

class A
{
	public:

	A(int a,int b)
	{
		int c;
		c=a+b;
		cout<<"sum="<<c<<endl;
	}
	A(float a,int b)
	{
		float d;
		d=a*b;
		cout<<"multi="<<d<<endl;
	}
	A(int a,float b)
	{
		float e;
		e=a-b;
		cout<<"substraction="<<e<<endl;
	}
};
void main()
{
	clrscr();
	A x1(5,5),x2(2.0f,2),x3(5,2.5f);
	getch();
}
