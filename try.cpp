#include<iostream>
using namespace std;
int main()
{
	
	int a;
	int b;
	int sum=0;
	for(a=1;a<=20;a++)
{
	int count = 0;
	for (b=1;b<=a;b++)
	{
		if (a%b==0)
		count++;		
	}
	if (count==2){
	cout<<a<<endl;
	sum += a;
		
	}
	
}
cout<<endl;
cout<<"sum of prime no :  "<<sum;
}





