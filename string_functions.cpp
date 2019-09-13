#include<iostream>
#include<string.h>
using namespace std;
void string_length(){     // string length
	char a[10];
	int i;
	cout<<"Enter the string"<<endl;
	cin>>a;
	for(i=0;a[i]!= NULL;i++);
	cout<<i;
}
void string_compare() {   // string comparision
	char a[10],b[10];
	int i,c,count=0;
	cout<<"Enter the 1st string"<<endl;
	cin>>a;
	cout<<"Enter the 2nd string"<<endl;
	cin>>b;
	if(strlen(a)==strlen(b)) {
		for(i=0;a[i]!=NULL;i++) {
			c=a[i]-b[i];
			if(c!=0) {
				cout<<c<<endl;
				break;
			}
			else {
				count++;
			}
		}
		if(count==strlen(a)) {
			cout<<"0"<<endl;
		}
	} else{
		cout<<"length are different"<<endl;
	}
}
void string_campare_i() {  // string camparision ignore case sensitive
	char a[10],b[10];
	int i,c,flag;
	cout<<"Enter the 1st string"<<endl;
	cin>>a;
	cout<<"Enter the 2nd string"<<endl;
	cin>>b;
	for(i=0;a[i]!=NULL;i++) {
		c=a[i]-b[i];
		if(c!=0 && c!=32 && c!=(-32)) {
			cout<<c<<endl;
			break;
		}
		else {
			flag=1;
		}
	}
	if(flag==1) {
		cout<<"0"<<endl;
	}
}
void string_concat() { // string concatination
	char a[20],b[20];
	int i,j;
	cout<<"Enter the 1st string"<<endl;
	cin>>a;
	cout<<"Enter the 2nd string"<<endl;
	cin>>b;
	for(i=0;a[i]!= NULL;++i);
	for(j=0;b[j]!= NULL;++i,++j) {
		a[i]=b[j];
	}
	a[i]= '\0';
	cout<<a;
}
void string_copy() { // string copy
	char a[10],b[10];
	int i;
	cout<<"Enter the string"<<endl;
	cin>>a;
	for(i=0;a[i]!=NULL;i++) {
		b[i]=a[i];
	}
	cout<<"Copied string: "<<b;
}
void string_lower() {
	char a[20];
	int i;
	cout<<"Enter the string"<<endl;
	cin>>a;
	for(i=0;a[i]!=NULL;i++) {
		if(a[i]>=65 and a[i]<=90) {
			a[i]=a[i]+32;
		}
	}
	cout<<a;
}
void string_upper() {
	char a[20];
	int i;
	cout<<"Enter the string"<<endl;
	cin>>a;
	for(i=0;a[i]!=NULL;i++) {
		if(a[i]>=97 && a[i]<=122) {
			a[i]=a[i]-32;
		}
	}
	cout<<a;
}
main()
{
//	string_length();
//	string_compare();
//	string_campare_i();
//	string_concat();
//	string_copy();
//	string_lower();
//	string_upper();
}
