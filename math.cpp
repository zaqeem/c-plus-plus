#include<iostream>
using namespace std;
int main()
{
	int a;
	 const int i=8;
	int number[i];
	int square[i];
	int cube[i];
	int sum[i];
int total;
	cout<<"Number:";
	for(a=0;a<i;a++)
		{
		number[i]=a;
		cout<<"\t"<<number[i];
		}
		cout<<endl;
	cout<<"Square:";
	for(a=0;a<i;a++)
	{
	square[i]=a*a;
	cout<<"\t"<<square[i];
}
cout<<endl;
cout<<"Cube:";
for(a=0;a<i;a++)
{
cube[i]=a*a*a;
cout<<"\t"<<cube[i];
}
cout<<endl;
cout<<"Sum:";

for(a=0;a<i;a++)
{
number[i]=a;
square[i]=a*a;
cube[i]=a*a*a;
sum[i]=number[i]+square[i]+cube[i];

cout<<"\t"<<sum[i];


}


}

