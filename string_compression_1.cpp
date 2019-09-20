#include<iostream>
using namespace std;
void compression(string str)
{
	int i,count=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==str[i+1])
		{
			count++;
		}
		else
		{
			cout<<count+1<<str[i];
			count=0;
		}
	}
}
int main()
{
	compression("bbbaaabbcccc");
}
