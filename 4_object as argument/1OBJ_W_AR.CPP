#include<iostream.h>
#include<conio.h>
//object with argyu time

class time
{
	int h,m;

	public:

	void lyo()
	{
		cout<<"enter hour=";
		cin>>h;
		cout<<"enter minuts=";
		cin>>m;
	}

	void total(time t1)
	{
		int H,M;

		M=t1.m+m;
		H=t1.h+h+M/60;
		M=M%60;

		cout<<"hour="<<H<<endl<<"minut="<<M;
	}
};
void main()
{
	time t1,t2;

	clrscr();
	t1.lyo();
	t2.lyo();

	t1.total(t2);
	getch();
}