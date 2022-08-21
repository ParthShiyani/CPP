#include<iostream.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	cout<<"press m for monday"<<"\n""press t for tuesday"<<"\n""press w for wednsday"<<"\n""press T for Thirsday"<<"\n""press f for friday"<<"\n""press s for saturday"<<"\n""press S for Sunnday";

	cout<<"\n""\n""enter your choice=";
	cin>>ch;

	switch(ch)
	{
		case 'm':
		cout<<"monday";
		break;

		case 't':
		cout<<"tuesday";
		break;

		case 'w':
		cout<<"wednsday";
		break;

		case 'T':
		cout<<"thirsday";
		break;

		case 'f':
		cout<<"friday";
		break;

		case 's':
		cout<<"saturday";
		break;

		case 'S':
		cout<<"sunday";
		break;

		default:
		cout<<"invalid choice";

	}
	getch();
}