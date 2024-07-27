#include<iostream>
using namespace std;
int math(int a)
{
	
	int b;
	cout<<"table of  "<<a<<endl;
	for(b=1;b<=10;b++)
{
	cout<<a<<"*"<<b<<"="<<a*b<<endl;
}

}
int main()
{
	int table;
	cout<<"Enter a Number:  ";
	cin>>table;
	math(table);
	
}
