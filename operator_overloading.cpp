#include<iostream>
using namespace std;
class sally{
	public:
		int num;
		sally();
		sally(int);
		sally operator+(sally);
};
sally::sally(){}
sally::sally(int a){
	num =a;
}
sally sally::operator+(sally aso){
	sally brandNew;
	brandNew.num = num + aso.num;
	return(brandNew);
}
int main(){
	sally a(34);
	sally b(21);
	sally c;
	
	c=a+b;
	cout<<c.num<<endl;
}
