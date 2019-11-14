#include<iostream>
using namespace std;
class common
	{
		protected: int a,b,c;
		public: void read()
			{
				cout<<"Enter the two number: "<<endl;
				cin>>a>>b;
			}
			void display()
			{
				cout<<c;
			}
	};
class addition: public common
	{
		public:
			void add()
			{
				c=a+b;
			}
	};
class subtract: public common
{
	public: 
		void sub()
		{
			c=a-b;
		}
}
int main()
{
	addition c1;
	c1.read();
	c1.add();
	c1.display();
}
