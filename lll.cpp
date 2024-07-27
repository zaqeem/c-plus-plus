#include<iostream>
using namespace std;
int prime(int b)
{

}
	


int main() 
{
	int a;
	int b;
	int sum=0;
	int count=0;
	for(a=1;a<=20;a++)
	{
		for(b=1;b<=20;b++)
		if(a%b==0)
		count++;
		if(count==2)
		cout<<b;
		}
	}

