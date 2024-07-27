#include<iostream>
using namespace std;
int main()
{
	int arr[3];
	int *f;
	f=arr;
	for(int i=0;i<=2;i++)
	cin>>arr[i];
	for(int i=0;i<=2;i++)
	cout<<*f++;
}
