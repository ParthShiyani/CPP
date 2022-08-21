#include<iostream.h>
#include<conio.h>

class A
{
	protected:

	void get()
	{
		cout<<"f of A"<<endl;
	}
};
class B:public A
{
	protected:

	void get()
	{
		A::get();
		cout<<"f of B"<<endl;
	}
};
class C:public A
{
	protected:

	void get()
	{
		A::get();
		cout<<"f of C"<<endl;
	}
};
class D:public B,public C
{
	public:

	void get()
	{
		B::get();
		C::get();
		cout<<"f of D"<<endl;
	}
};
void main()
{
clrscr();
	D d;
	d.get();
	getch();
}