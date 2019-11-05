#include<iostream>
using namespace std;
class a
{
	private: int x=50,y=40;
	public: void read(int x, int y)
	{
//		this -> x=x; // this line will get function x value and put that in global private x value; 50 = 20(x=20);
		x= this->x; // this line will get upper private variable and put that in functions x value; so this line will do 20=50(x=50);
		y=y;
		cout<<x<<" "<<y;
	}
};
int main()
{
	a o1;
	o1.read(20,30);
}
