//Write a program to convert expression into c++ with program:
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int a,b,c,x,y;
cout<<"Enter value of 'A'= ";
cin>>a;
cout<<"Enter value of 'B'= ";
cin>>b;
cout<<"Enter value of 'C'= ";
cin>>c;
cout<<"Enter value of 'X'= ";
cin>>x;
cout<<"Enter value of 'Y'= ";
cin>>y;
float z=int((x*y)*2*a*b-c)/int(a-b); // Converted expression into c++.
cout<<"z= "<<z<<endl;
	
	
}
