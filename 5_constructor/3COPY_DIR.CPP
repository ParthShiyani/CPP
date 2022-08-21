#include<iostream.h>
#include<conio.h>
   //copy direct
	class item
	{
		int a;
		public:

		item()
		{
			cin>>a;
		}
		void getdata()
		{
			cout<<a;
		}
	};

	void main()
	{
		item it1;

		clrscr();

		it1.getdata();
		item it2=it1;
		it2.getdata();
		getch();
	}