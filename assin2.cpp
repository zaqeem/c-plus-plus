// Convert quadrictic formula expression into c++ expression and write a program o
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	cout<<"Enter value of 'A'= ";
	cin>>a;
	cout<<"Enter value of 'B'= ";
	cin>>b;
	cout<<"Enter value of 'C'= ";
	cin>>c;
	float x=(-b+sqrt(b*b-4*a*c))/(2*a); // quadrictic formula with positive sign converted in c++
	float y=(-b-sqrt(b*b-4*a*c))/(2*a);// quadrictic formula with negative sign convertedd in c++
	cout<<"x="<<x<<endl<<"y="<<y;
}
