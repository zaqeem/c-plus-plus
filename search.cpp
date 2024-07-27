#include<iostream>
using namespace std;
int main()
{
	int a[10]={22,30,40,50,60,70,33,65,54,99,};
	int b;
	int c;
	int find=-2;
	cout<<"Enter value to find: ";
	cin>>c;
	for(b=0;b<10;b++)
{
			if(a[b]==c)

			find=b;
			}
if(find==-2)
{
		cout<<"not found value in index";
	}
	else
	{
	cout<<"value found in index: "<<find;
	
}
}
