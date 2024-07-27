#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a=1;
	int b=2;
	int c=3;
		int y=(-b+sqrt(b*b-4*a*c))/(2*a);
	int x=(-b-sqrt(b*b-4*a*c))/(2*a);
	cout<<"x="<<x<<endl<<"y="<<y;
	
}
