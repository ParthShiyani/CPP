#include<iostream.h>
#include<conio.h>

class A
{
	int a,b;
	public:

	void set()
	{
		cin>>a;
		cin>>b;
	}
	void get()
	{
		cout<<"a="<<a;
		cout<<"b="<<b;
	}

	void operator++()
	{
		++a;
		--b;
	}
};
void main()
{
	clrscr();
	A a1;

	a1.set();
	a1.operator++();
	a1.get();
	getch();
}
