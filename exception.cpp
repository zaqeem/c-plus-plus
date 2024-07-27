#include<iostream>
using namespace std;
int main()
{
	cout<<"execution starting"<<endl;
	int a,b,c;
	cout<<"enter two numbrs";
	cin>>a>>b;
	try
	{
	if(b==0)	
throw b;
	c=a/b;
	cout<<"result";
	cout<<c;
}
catch(int x)
{
	cout<<"cannot divide by "<<x;
	
}
	cout<<endl<<"execution ended";
	
}
