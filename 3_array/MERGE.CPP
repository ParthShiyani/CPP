#include<iostream.h>
#include<conio.h>

void main()
{

	int a[10],b[10],c[20],n,i,j,m;
	clrscr();

	cout<<"enter n value=";
	cin>>n;
	m=n*2;
	cout<<"enter a array\n";

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter b array\n";
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}

	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(i=0,j=n;i<m;i++,j++)
	{
		c[j]=b[i];
	}
	for(i=0;i<m;i++)
	{
		cout<<c[i]<<"\n";
	}

	getch();
}



