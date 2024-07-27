#include<iostream>
using namespace std;
int main()
{
	int *p[3];
	int a;
	int b;
	int c;
	p[0]=&a;
	p[1]=&b;
	p[2]=&c;
	cin>>a>>b>>c;
	for(int i=0;i<=2;i++)
	cout<<p[i]<<endl;
	
	
}
