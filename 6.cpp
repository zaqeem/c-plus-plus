#include<iostream>
using namespace std;
int ptr(int *a,int *b)
{
int t;
t=*a;
*a=*b;
*b=t;
	
	
}
int main()
{
	int a=30;
	int c=43;
	cout<<"before swiping :  "<<a<<endl<<c;
	ptr(&a,&c);
	cout<<"after swiping :  "<<a<<endl<<c;
}
