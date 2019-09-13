#include<iostream>
using namespace std;
class clock
{
	int hour,minute;
	public:void read() {
		cout<<"Enter the hour"<<endl;
		cin>>hour;
		cout<<"Enter the minute"<<endl;
		cin>>minute;
	}
	void add(clock x,clock y) {
		hour = x.hour + y.hour;
		minute = x.minute+ y.minute;
	}
	void display() {
		cout<<hour<<":"<<minute;
	}
};
main() {
	clock c1,c2,c3;
	c1.read();
	c2.read();
	c3.add(c1,c2);
	c3.display();
}
