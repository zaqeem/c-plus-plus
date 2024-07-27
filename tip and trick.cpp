#include<bits/stdc++.h>
using namespace std;
int even_odd(int i)
{
	
	if(i%2==0)
	cout<<i<<"  is even number";
	else
	cout<<i<<"  is odd number";
}
int main()
{
int a;
cout<<"enter any number:  ";
cin>>a;
even_odd(a);
}
