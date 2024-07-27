#include <iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<" Enter 1st integer: ";
	cin>>a;
	cout<<" Enter 2nd integer: ";
	cin>>b;
	cout<<" Before Swaping values: "<<endl;
	cout<<" a = "<<a<<"  ,  b = "<<b<<endl;
	cout<<" Swaping using third variable: "<<endl;
	// a = 5 , b = 10
	c = a;// c = 5
	a = b;// a = 10 
	b = c;// b = 5
	cout<<" a = "<<a<<"  ,  b = "<<b<<endl;
	cout<<" Swaping without using third variable: "<<endl;
	// a = 5, b = 10
	a = a+b;// a = 5 + 10 = 15
	b = a-b;// b = 15 - 10 = 5
	a = a-b;// a = 15 - 5 = 10
	cout<<" a = "<<a<<"  ,  b = "<<b<<endl;
	
}
