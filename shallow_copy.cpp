//shallow copy

#include<iostream>
using namespace std;
class demo
{
	private: int x,y;
	public: void get(int a, int b){
		x=a;
		y=b;
	}
	void display()
	{
		cout<<x<<" "<<y<<endl;
	}
};
int main()
{
	demo o1;
	o1.get(10,20);
	o1.display();
	demo o2 = o1;
	o2.display();
}
