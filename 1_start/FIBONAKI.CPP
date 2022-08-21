#include<iostream.h>
#include<conio.h>

void main()
{
	int s=0,s1=1,s2,n,i=1;
	clrscr();
	cout<<"enter n value=";
	cin>>n;
	cout<<s<<"\n"<<s1<<"\n";

	while(i<n)
	{
		s2=s+s1;
		cout<<s2<<"\n" ;
		s=s1;
		s1=s2;
		i++;
	}
	getch();
}