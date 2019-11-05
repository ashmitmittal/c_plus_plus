#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public: 
		void read()
		{
			cin>>real>>img;
		}
		void display()
		{
			cout<<real<<" "<<img<<endl;
		}
		complex operator+(complex x)
		{
			complex z;
			z.real = real+x.real;
			z.img = img+x.img;
			return z;
		}
};

int main()
{
	complex c1,c2,c3;
	c1.read();
	c2.read();
	c3=c1+c2;
	c3.display();
	return 0;
	
}
