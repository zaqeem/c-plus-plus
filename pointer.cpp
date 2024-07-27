#include<bits/stdc++.h>
using namespace std;
int main()
{
	int *ptr;
	int i;
	int arr[5];
	for(i=0;i<=4;i++)
	cin>>arr[i];
	ptr=arr;
	for(i=0;i<=4;i++)
	cout<<*ptr++;
	
}
