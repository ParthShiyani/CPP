#include<iostream.h>
#include<conio.h>

class grand_father
{
	int age;
	protected:

	grand_father()
	{
		age=0;
	}
       grand_father(int g)
	{
		age=g;
	}
	void get_g()
	{
		cout<<"grand father's age="<<age<<endl;
	}
};
class father:public grand_father
{
	int age;
	protected:

	father()
	{
		age=0;
	}
	father(int g,int f):grand_father(g)
	{
		age=f;
	}
       void get_f()
	{
		get_g();
		cout<<"father's age="<<age<<endl;
	}
};
class uncle
{
	int age;
	protected:

	uncle()
	{
		age=0;
	}
       uncle(int u)
	{
		age=u;
	}
	void get_u()
	{
		cout<<"uncle's age="<<age<<endl;
	}
};
class son:public father,public uncle
{
	int age;
	public:

	son()
	{
		age=0;
	}
	son(int g,int f,int u,int s):father(g,f),uncle(u)
	{
		age=s;
	}
	void get_s()
	{
		get_f();
		get_u();
		cout<<"son age="<<age<<endl;
	}
};
void main()
{
	clrscr();
	son s(70,45,40,16);
	s.get_s();
	getch();
}