#include<iostream.h>
#include<conio.h>

void main()
{
	int n,i=1,count=0;
	clrscr();
	cout<<"enter n value=";
	cin>>n;

	while(i<=n)
	{
		if(n%i==0)
		{
			count++;
		}
		i++;
	}
	if(count==2)
	{
		cout<<"primr number";
	}
	else
	{
		cout<<"not prime";
	}
	getch();
}