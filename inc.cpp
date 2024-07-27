#include<iostream>
using namespace std;
int main()
{
	int a;
	int b=15;
	b=(a++)+(a++);
	a=(b++)+(b++);
	cout<<"value of 'B' is : "<<b<<endl<<"value of 'A' is : "<<a;
	
}
