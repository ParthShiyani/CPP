#include<iostream.h>
#include<conio.h>
//with returntype
class A
{
	int a,b,c;
	public:

      int AB(int a)
	{
		return a*a;
	}
      int AB(float a,int b)
	{
		return a+b;
	}
       int AB(int a,float b)
	{
		return a-b;
	}
};
void main()
{
	clrscr();
	A x1;

	cout<<"a*a="<<endl;
	cout<<x1.AB(5)<<endl;

	cout<<"a+b="<<endl;
	cout<<x1.AB(5.5f,5)<<endl;

	cout<<"a-b="<<endl;
	cout<<x1.AB(5,2.5f)<<endl;

	getch();
}
