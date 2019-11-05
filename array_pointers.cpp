#include<iostream>
using namespace std;
main()
{
	
	int a[100][100]={{2,3,4},
				{5,6,7},
				{8,9,10}};
	cout<<*(a+2)<<endl;
	cout << &a[2][0];
	
//	int *p;
//	int n;
//	cin>>n;
//	p = new int[n];
//	for(int i=0; i<n;i++)
//	{
//		cin>>p[i];
//	}
//	
//	for(int i=0;i<n;i++)
//	{
//		cout<<p[i]<<endl;
//	}
//	delete p;
}
