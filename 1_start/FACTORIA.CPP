#include<iostream.h>
#include<conio.h>

void main()
{
	int a,f=1;
	clrscr();
	cout<<"enter a value=";
	cin>>a;

	while(a!=0)
	{
		f=f*a;
		a--;
	}
	cout<<"factorial is ="<<f;
	getch();
}