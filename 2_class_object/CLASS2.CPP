#include<iostream.h>
#include<conio.h>

class employee
{
	int id,salary;
	char name[20],post[20];

	public:

	void setdata()
	{
		cout<<"enter name=";
		cin>>name;
		cout<<endl;
		cout<<"enter id=";
		cin>>id;
		cout<<endl;
		cout<<"enter post=";
		cin>>post;
		cout<<endl;
		cout<<"enter salary=";
		cin>>salary;
		cout<<endl;
	}
	void getdata()
	{
		cout<<"name="<<name;
		cout<<endl;
		cout<<"emp id="<<id;
		cout<<endl;
		cout<<"post="<<post;
		cout<<endl;
		cout<<"salary="<<salary;
		cout<<endl;
	}
};
void main()
{
	employee s,s1;
	clrscr();

	s.setdata();
	s.getdata();
	s1.setdata();
	s1.getdata();

	getch();
}

