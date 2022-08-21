#include<iostream.h>
#include<conio.h>
#include<string.h>
//parameteraized constructor
class emp
{
	int id,salary;
	char name[20],post[20];

	public:

	emp(int id,char name[],char post[],int salary)
	{
		this->id=id;
		strcpy(this->name,name);
		strcpy(this->post,post);
		this->salary=salary;
	}
	void getdata()
	{
		cout<<id<<"\t"<<name<<"\t"<<post<<"\t"<<salary;
	}
};
void main()
{
	emp e1(1,"parth","j",9000), e2(2,"th","j",6000);

	clrscr();

	cout<<"id=\tname=\tpost=\tsalary\n";

	e1.getdata();
	e2.getdata();

	getch();
}


