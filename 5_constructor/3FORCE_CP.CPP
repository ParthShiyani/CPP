#include<iostream.h>
#include<conio.h>

class emp
{
	int id;

	public:
	emp()
	{
		cout<<"enter employee id=";
		cin>>id;
	}
	void copy(emp &e)
	{
		id=e.id;
	}
	void getdata()
	{
		cout<<"id="<<id<<endl;
	}
};
void main()
{
	clrscr();
	emp e,e1;

	e.getdata();
	e1.copy(e);
	e1.getdata();

	getch();
}

