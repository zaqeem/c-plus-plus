#include<iostream>
using namespace std;
int main()
{
int a;
int b;
for(a=2;a<=50;a++)
{
for(b=2;b<a;b++)
if(a%b==0)
break;
if(a==b)
cout<<a<<"\t";
}
}
