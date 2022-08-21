#include<iostream.h>
#include<conio.h>

void main()
{

	int a[10],n,pos,val,i;
	clrscr();

	cout<<"enter n value=";
	cin>>n;

	cout<<"enter array\n";

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	cout<<"enter value pos=";
	cin>>pos;
	cout<<"enter new val=";
	cin>>val;

	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=val;
	n++;

	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}

	getch();
}



