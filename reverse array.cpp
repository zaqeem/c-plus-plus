#include<iostream>
using namespace std;
int main()
{
	
	int arr[5];
	int a;
	cout<<"Enter Elements in Array :"<<endl;
	for(a=0;a<5;a++)
	{
	cin>>arr[a];
}
cout<<endl;
cout<<" Elements of Array in Matric Form: "<<endl;
cout<<"{ ";
for(a=0;a<5;a++)
	{
	cout<<arr[a]<<",";
}
	cout<<"}";
	cout<<endl<<endl;
	cout<<"Elements of Array in Reverse Form: "<<endl;
	cout<<"{";
	for(a=4;a>=0;a--)
	{
	cout<<arr[a]<<",";
}
cout<<"}";
	

}
