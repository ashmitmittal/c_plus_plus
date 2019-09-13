#include<iostream>
using namespace std;
class vowel
{
	private: char a[20],b[20];
	int i,count=0,j;
	public: void getdata()
			{
				cout<<"Enter the string"<<endl;
				cin>>a;
			}
			void count_vowel() {
				for(i=0;a[i]!=NULL;i++)
				{
					if(!(a[i] == 'a' || a[i]=='e'|| a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')) {
						b[count]=a[i];
						count++;
					}
				}
			}
			void display() {
//				cout<<"Number of Vowels are: "<<count<<endl;
				for(i=0;i<count;i++) {
					cout<<b[i];
				}
			}
			
};
main()
{
	vowel c1;
	c1.getdata();
	c1.count_vowel();
	c1.display();
}
