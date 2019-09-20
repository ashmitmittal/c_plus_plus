#include<iostream>
using namespace std;
class ashi
{
	public:
		ashi(){var=0;}
	private:
		int var;
		friend void ashiFriend(ashi afo);
		
};
void ashiFriend(ashi afo) {
	afo.var=99;
	cout<<afo.var<<endl;
}
int main() {
	ashi bob;
	ashiFriend(bob);
}
