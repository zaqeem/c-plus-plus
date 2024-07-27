#include<iostream>
using namespace std;
struct Marks
{
	int roll;
	int marks;
	
};
int main()
{
	Marks a[5];
	int i;
	int max;
	for(i=0;i<5;i++)
{
	cout<<"enter roll no= ";
	cin>>a[i].roll;	
cout<<"enter marks= ";
cin>>a[i].marks;

}
	max=a[0].marks;
	for(i=0;i<5;i++)
	{
if(a[i].marks>max)
max=a[i].marks;
}
cout<<max;
}

