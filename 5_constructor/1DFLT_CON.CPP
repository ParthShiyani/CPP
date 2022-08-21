#include<iostream.h>
#include<conio.h>
 //default constructor
class student
{
	int id,div;
	char name[20];
	public:

	student()
	{
		cout<<"enter id=";
		cin>>id;
		cout<<"enter div=";
		cin>>div;
		cout<<"enter name=";
		cin>>name;
	}
	void getdata()
	{
		cout<<"\nid="<<id<<"\ndivison="<<div<<"\nname="<<name<<endl;
	}
};

void main()
{
	student s1,s2;

	clrscr();
	s1.getdata();
	s2.getdata();

	getch();
}


