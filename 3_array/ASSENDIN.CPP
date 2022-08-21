#include<iostream.h>
#include<conio.h>

void main()
{

	int a[10],n,i,j,c;
	clrscr();

	cout<<"enter n value=";
	cin>>n;
	cout<<"enter a array\n";

	for(i=0;i<n;i++ )
	{
		cin>>a[i];
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\n";
	}

	getch();
}