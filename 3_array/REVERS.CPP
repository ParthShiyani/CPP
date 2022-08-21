#include<iostream.h>
#include<conio.h>

void main()
{

	int a[10],n,i,j,c;
	clrscr();

	cout<<"enter n value=";
	cin>>n;
	cout<<"enter a array\n";

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0,j=n-1;i<n/2;i++,j--)
	{
		c=a[i];
		a[i]=a[j];
		a[j]=c;
	}

	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]"<<a[i]<<"\n";
	}

	getch();
}