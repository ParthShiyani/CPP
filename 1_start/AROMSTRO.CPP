#include<iostream.h>
#include<conio.h>

void main()
{
	int n,m,i,arm=0;
	clrscr();
	cout<<"enter n value=";
	cin>>n;
	m=n;
	while(n!=0)
	{
		i=n%10;
		arm=arm+i*i*i;
		n=n/10;
	}
	if(m==arm)
	{
		cout<<"aromstrong number";
	}
	else
	{
		cout<<"not aromstrong number";
	}
	getch();
}