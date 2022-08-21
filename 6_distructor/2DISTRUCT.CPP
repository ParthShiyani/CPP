#include<iostream.h>
#include<conio.h>

class employee
{
	int id;

	public:

	employee()
	{
		cout<<"enter emp id=";
		cin>>id;
	}
	~employee()
	{
		cout<<"constructor succesfully reles=";
	}
	void getdata()
	{
		cout<<"id="<<id;
	}
};
void main()
{
	clrscr();
	employee e1;

	e1.getdata();
	getch();
}