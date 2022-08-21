#include<iostream.h>
#include<conio.h>

void main()
{
	int i,j,k;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(k=1;k<i;k++)
		{
			cout<<"  ";
		}
		for(j=i;j<=5;j++)
		{
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	getch();
}