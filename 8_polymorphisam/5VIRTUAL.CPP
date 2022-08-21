#include<iostream.h>
#include<conio.h>

class animal
{
	public:

	void fly()
	{
		cout<<"duck is flaying"<<endl;
	}
	void walk()
	{
		cout<<"dog is walking"<<endl;
	}
	void virtual eat();
};
class dog:public animal
{
	public:

	void eat()
	{
		cout<<"dog is eating"<<endl;
	}
};
class duck:public animal
{
	public:

	void eat()
	{
	      cout<<"duck is eating"<<endl;
	}
};
void main()
{
	clrscr();
	animal *a;
	dog d;
	a=&d;
	a->walk();
	a->eat();
	duck d1;
	a=&d1;
	a->fly();
	a->eat();
	getch();
}