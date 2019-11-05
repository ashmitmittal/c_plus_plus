#include<iostream>
using namespace std;
class a
{
	public: virtual void read()
	{
		cout<<"hello from A";
	}
};
class b: public a
{
	public: 
	 void read()
	{
		cout<<"hello from b";
	}
};
int main()
{
	b o1;
	a *a1;
	a1=&o1;
	a1->read();
}
