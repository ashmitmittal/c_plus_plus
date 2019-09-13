#include<iostream>
#include<string.h>
using namespace std;
class complex
{
	private: char str1[100],str2[100],str3[100];
	int num,j,count=0,i;
	public: //void get() {
//		cout<<"Enter the string"<<endl;
//		cin>>str1;
//		cout<<"Enter the number"<<endl;
//		cin>>num;
//	}
	complex(int n, char str2[100])
	{
		num=n;
		for(i=0,j=num-1;i<num,j>=0;i++,j--) {
			str1[i]=str2[j];
		}
	}
	complex(complex c1, complex c2){
		strcat(c1.str1,c2.str1);
		for(i=0;i<strlen(c1.str1)-1;i++)
		{
			cout<<c1.str1[i];
		}
	}
//	display()
//	{
//		cout<<c1.str1;
//	}
};
int main()
{
	complex c1(3,"sachin");
	complex c2(2,"verma");
	complex c3(c1,c2);
//	c3.display();
}
