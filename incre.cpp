#include<iostream>
using namespace std;
int main()
{
	int a;
	int b=15;
	
	a=(b++)+(b++);
	b=(a++)+(a++);
	cout<<"value of 'B' is : "<<b<<endl<<"value of 'A' is : "<<a;
	
}
