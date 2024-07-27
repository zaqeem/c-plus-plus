#include<iostream>
using namespace std;
void darr()
{
	for(int i=1;i<=5;i++)
{
	cout<<"*";
	}cout<<endl;
}
void darr(int x)
{
	int i;
	for(i=1;i<=x;i++)
	{
		cout<<"*";
	}
	cout<<endl;
}

void darr(int y,char z)
{
	int i;
	for(i=1;i<=y;i++)
	cout<<z;
}
int main()
{

darr();
darr(4);
darr(5,'$');

	
}
