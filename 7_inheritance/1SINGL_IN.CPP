#include<iostream.h>
#include<conio.h>

//single inheritons

class A
{
	char a[10];

	protected:
	void setA()
	{
		cout<<"enter father's name=";
		cin>>a;
	}
	void getA()
	{
		cout<<"father's name="<<a;
	}
};
class B:public A
{
	char b;

	public:
	void setB()
	{
		setA();
		cout<<"enter son name=";
		cin>>b;
	}
	void getB()
	{
		getA();
		cout<<endl<<"father son name="<<b;
	}
};
void main()
{
	clrscr();
	B b;

	b.setB();
	b.getB();

	getch();
}
