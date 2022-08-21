#include<iostream.h>
#include<conio.h>

class sum
{
	int a;

	public:
		void setdata()
		{
			cout<<"enter value of a=";
			cin>>a;
		}
		void total(sum t1)
		{
			int c;

			c=t1.a+a;

			cout<<"sum of two object="<<c;
		}
};

void main()
{
	sum t1,t2;
	clrscr();
	t1.setdata();
	t2.setdata();

	t1.total(t2);
	getch();
}






