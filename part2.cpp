#include<iostream>
using namespace std;
int main()
{
	int a=1;
	int num;
	int factor=0;
	cout<<"Enter a number to check wheather it is prime or not :  ";
	cin>>num;
while(a<num)
{
	if(num%a==0)
	factor++;
	a++;
}
	if(factor<=2)

	cout<<num<<"  is prime number";
	
	else
	cout<<num<<"  is not prime number";
}


