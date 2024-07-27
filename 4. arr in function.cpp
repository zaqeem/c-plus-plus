#include <iostream>
using namespace std;
void funct(int a[])
{
	int k;
	for(int i = 0; i<=5; i++)
	{
		k = i + 1;
		cout<<"value of element "<<k<<" is "<<a[i]<<endl;
	}
}
main()
{
	int arr[5],j;
	for(int i = 0; i<=5; i++)
	{
		j = i+1;
		cout<<"Enter value of element "<<j<<":";
		cin>>arr[i];
	}
	for(int i = 0; i<=5; i++)
	{
		j==0;
		funct(arr[j]);
		j++;
	}
}

