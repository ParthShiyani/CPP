#include<iostream>
using namespace std;
//multiple throw catch
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
			else if(b==1)
			{
				throw 2.5;
			}
			else if(b==2)
			{
				throw 's';
			}
			else if(b==3)
			{
				throw "string error";
			}
			else 
			{
				cout<<"divison of c and b="<<endl;
				c=a/b;
			}
		}
		
		catch(int x)
		{
			cout<<"int error"<<x;
		}
		catch(double y)
		{
				cout<<"float error"<<y;
		}
		catch(const char z)
		{
			cout<<"character error"<<z;
		}
		catch(const char *q)
		{
			cout<<q;
		}
		
		return 0;
}
