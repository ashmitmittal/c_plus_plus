#include<iostream>
using namespace std;
class complex
{
	private: int real,img;
	public: void read() {
		cout<<"Enter the num 1"<<endl;
		cin>>real;
		cout<<"Enter the num 2"<<endl;
		cin>>img;
	}
	complex(){}
	complex(int a,int b) {
		real = a;
		img = b;
	}
	complex(complex &c1, complex &c2) {
		real = c1.real + c2.real;
		img = c1.img + c2.img;
	}
	void disp() {
		cout<<real<<" "<<img;
	}
};
int main()
{
	complex c1; //default constructor
	c1.read();
	complex c2(5,4); // parameter constructor
	complex c3(c1,c2); // copy constructor
	c3.disp();
}
