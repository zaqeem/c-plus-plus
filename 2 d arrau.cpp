#include<iostream>
using namespace std;
int arr(int a[2][2]);
int main()
{
	int a[2][2];
	int i,j;
	cout<<"enter value in element";
	for(i=0;i<=1;i++)
   {
	  for(j=0;j<=1;j++)
	{
	cin>>a[i][j];
}
}
arr(a);
}
int arr(int a[2][2])
{

int i;
int j;
for(i=0;i<=1;i++)
{
	for(j=0;j<=1;j++)
	{
		cout<<a[i][j];
	}
	}	
}

