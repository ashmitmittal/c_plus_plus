#include<iostream>
#include<string.h>
using namespace std;
class obj_add {
	private: char str1[100],str2[100];
	int num,i,j,count=0;
	public: void get() {
		cout<<"Enter the string"<<endl;
		cin>>str1;
		cout<<"Enter the number"<<endl;
		cin>>num;
	}
	obj_add add(obj_add c) {
		obj_add temp;
		temp.num = num + c.num;
		for(i=0,j=num-1;i<num,j>=0;i++,j--) {
			str2[i] = str1[j];
			count++;
		}
		for(i=0,j=c.num-1;i<c.num,j>=0;i++,j--)
		{
			str2[count] = c.str1[j];
			count++;
		}
		for(i=0;i<temp.num;i++) {
			cout<<str2[i];
		}
//		cout<<"\n"<<str2<<endl;
		cout<<"\n"<<temp.num;
	}
};
int main()
{
	obj_add o1,o2,o3;
	o1.get();
	o2.get();
	o3 = o1.add(o2);
	return 0;
}
