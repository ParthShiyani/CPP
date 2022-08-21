#include<iostream.h>
#include<conio.h>
//multilevel inheritanse
class A
{
	char name[20];

	protected:

	void setA()
	{
		cout<<"enter g fathre's name=";
		cin>>name;
	}
	void getA()
	{
		cout<<"g fathre's name="<<name<<endl;
	}
};
class B:public A
{
	char name1[20];

	public:

	void setB()
	{
		setA();
		cout<<"enter father's name=";
		cin>>name1;
	}
	void getB()
	{
		getA();
		cout<<"father's name="<<name1<<endl;
	}
};
class C:public B
{
	char name2[20];

	public:

	void setC()
	{
		setB();
		cout<<"enter son name=";
		cin>>name2;
	}
	void getC()
	{
		getB();
		cout<<"son name="<<name2<<endl;
	}
};

void main()
{
	clrscr();

	C c;

	c.setC();
	c.getC();

	getch();
}