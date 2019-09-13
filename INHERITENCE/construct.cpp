#include<iostream>
using namespace std;
class base
{
	public: base()
		{
			cout<<"Default of base"<<endl;
		}
		base(int x)
		{
			cout<<"1 parameter of base"<<endl;
		}
		base(int x,int y)
		{
			cout<<"2 parameter of base"<<endl;
		}
};
class derived: public base
{
	public: derived()
		{
			cout<<"defalut of derived"<<endl;
		}
		derived(int x)
		{
			cout<<"1 parameter of derived"<<endl;
		}
		derived(int x, int y)
		{
			cout<<"2 parameter of derived"<<endl;
		}
};
main()
{
	derived d(1,1);
}
