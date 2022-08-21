#include<iostream>
using namespace std;
//single throw catch
int main()
{
		int a,b,c;
		
		cout<<"entar a value=";
		cin>>a;
		cout<<"enter b value=";
		cin>>b;
		
		try
		{
			if(b==0)
			{
				throw 1;
			}
		}
		
		catch(int x)
		{
			cout<<"int error"<<x;
		}
		
		return 0;
}
