#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public: 
		void read()
		{
			cin>>a>>b;
		}
		void display()
		{
			cout<<a<<" "<<b<<endl;
		}
		void operator++()
		{
			a++;
		}
};
int main()
{
	complex c1;
	c1.read();
	++c1;
	c1.display();
	return 0;
	
}
