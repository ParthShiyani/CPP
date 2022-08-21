#include<iostream.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	cout<<"enter a,b,c value=";
	cin>>a;
	cin>>b;
	cin>>c;

	if(a>b && a>c)
	{
		cout<<"a is big";
	}
	else if(b>c)
	{
		cout<<"b is big";
	}
	else
	{
		cout<<"c is big";
	}
	getch();
}