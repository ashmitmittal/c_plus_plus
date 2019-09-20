#include<iostream>
using namespace std;
void expansion(string str)
{
	int i,j,temp,k,sum=0,sum1=0,temp1;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			k=i;
			while(str[k-1]>=48 && str[k-1]<=57)
			{
				temp=str[k-1];
				k--;
				temp-=48;
				sum=sum*10+temp;
			}
//			cout<<sum<<endl;
//			cout<<temp<<endl;
			while(sum!=0)
			{
				temp1=sum%10;
				sum1=sum1*10+temp1;
				sum=sum/10;
			}
//			cout<<sum1<<endl;
			for(j=0;j<sum1;j++)
			{
				cout<<str[i];
			}
			temp=0;
			sum1=0;
		}
	}
}
int main()
{
	expansion("12a3b");
}
