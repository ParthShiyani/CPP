#include<iostream.h>
#include<conio.h>

void main()
{
	char ch;
	int a,b,c;
	clrscr();
	cout<<"press + for additon"<<"\n""press - for substraction"<<"\n""press * for multiplication"<<"\n""press / for divison";

	cout<<"\n""\n""enter your choice=";
	cin>>ch;
	cout<<"enter a value=""\n";
	cin>>a;
	cout<<"enter b value=""\n";
	cin>>b;

	switch(ch)
	{
		case '+':
		c=a+b;
		cout<<c;
		break;

		case '-':
		c=a-b;
		cout<<c;
		break;

		case '*':
		c=a*b;
		cout<<c;
		break;

		case '/':
		c=a/b;
		cout<<c;
		break;

		default:
		cout<<"invalid choice";

	}
	getch();
}