#include<iostream.h>
#include<conio.h>

class student
{
	int id,std,div;
	char name[20],fn[20];

	public:

	void setdata()
	{
		cout<<"enter id=";
		cin>>id;
		cout<<endl;
		cout<<"enter std=";
		cin>>std;
		cout<<endl;
		cout<<"enter div=";
		cin>>div;
		cout<<endl;
		cout<<"enter name=";
		cin>>name;
		cout<<endl;
		cout<<"enter faculty name=";
		cin>>fn;
		cout<<endl;
	}
	void getdata()
	{
		cout<<id;
		cout<<endl;
		cout<<std;
		cout<<endl;
		cout<<div;
		cout<<endl;
		cout<<name;
		cout<<endl;
		cout<<fn;
	}
};
void main()
{
	student s,s1;
	clrscr();

	s.setdata();
	s.getdata();
	s1.setdata();
	s1.getdata();

	getch();
}

