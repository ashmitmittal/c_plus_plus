#include<iostream>
using namespace std;
void sum(int *ptr, int n);

int main()
{
	int n, arr[100];
	cout<<"enter the size of array"<<endl;
	cin>>n;
	cout<<"enter the elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sum(&arr[0], n); // they both are same thing
//	sum(arr,n);
}
void sum(int *ptr, int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=*(ptr+i);
	}
	cout<<"\n"<<sum;
}
