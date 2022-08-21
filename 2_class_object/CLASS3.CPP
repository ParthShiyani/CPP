#include<iostream.h>
#include<conio.h>

class animal
{
	char name[20],type[20],ftp[10];

	public:

	void setdata()
	{
		cout<<"enter name=";
		cin>>name;
		cout<<endl;
		cout<<"enter type=";
		cin>>type;
		cout<<endl;
		cout<<"enter ftp=";
		cin>>ftp;
		cout<<endl;
	}
	void getdata()
	{
		cout<<"enter animal name="<<name;
		cout<<endl;
		cout<<"animal type="<<type;
		cout<<endl;
		cout<<"enter food type="<<ftp;
		cout<<endl;
	}
};
void main()
{
	animal s;
	clrscr();

	s.setdata();
	s.getdata();

	getch();
}

