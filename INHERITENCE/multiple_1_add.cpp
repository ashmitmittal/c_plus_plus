#include<iostream>
using namespace std;
class common
	{
		protected: int a,b;
		public: void read()
			{
				cout<<"Enter the number: "<<endl;
				cin>>a>>b;
			}
	};
class common1
	{
		protected: int c;
		public: void disp()
			{
				cout<<c;
			}
	};
class addition: public common, public common1
	{
		public: void add()
			{
				c=a+b;
			}
	};
int main()
{
	addition c1;
	c1.read();
	c1.add();
	c1.disp();
}
