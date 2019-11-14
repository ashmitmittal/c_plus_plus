#include<iostream>
using namespace std;
class common
{
	protected: int a=10,b=20;
	public: void show()
		{
			cout<<a<<" "<<b;
		}
};
class common1: public common
{
	public: void show()
		{
			cout<<"Hello welcome in common1"<<endl;
//			common::show();
		}
};
int main()
{
	common1 c1;
	c1.show();
}
