#include<iostream.h>
#include<conio.h>

class A
{
	int a;
	public:

	void set()
	{
		cin>>a;
	}
	void get()
	{
		cout<<"a="<<a;
	}

       void operator+(A a2)
	{
		int c;
		c=a+a2.a;
		cout<<c;
	}
};
void main()
{
	clrscr();
	A a1,a2;

	a1.set();
	a2.set();

	a1.operator+(a2);
	getch();
}