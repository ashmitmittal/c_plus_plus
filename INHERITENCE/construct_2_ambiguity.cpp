#include<iostream>
using namespace std;
class a
{
	public: a()
		{
			cout<<"Construct of A"<<endl;
		}
		void show()
		{
			cout<<"Show from A"<<endl;
		}
};
class b
{
	public: b()
		{
			cout<<"Construct of B"<<endl;
		}
		void show()
		{
			cout<<"Show of B"<<endl;
		}
};
class c: public a, public b {
};
int main()
{
	c o1;
	o1.show();
//	o1.a::show();
}
