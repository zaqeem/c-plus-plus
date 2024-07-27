#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout<<"enter two numbers: "<<endl;
	cin>>a>>b;
	if(a>b)
	cout<<"A is greater";
	if(a<b)
	cout<<"B is greater";
	if(a==b)
	cout<<"both are equal";
	if(a!=b)
	cout<<"not equal";
	if(a%2==0 && b%2==0)
	cout<<"both are even";
	if(a%2!=0 && b%2!=0)
	cout<<"both are odd";
	
}
