#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	int i;
	int factor=0;
	cout<<"enter number";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		for(int j=1;j<=a;j++)
		{
			if(a%i==0)
			factor++;
			if(factor==2)
			cout<<i;
		}
	}
}
