#include<iostream>
using namespace std;
int main()
{
	system("cls");
	int i;
	int a[5];
	int b[5];
	int sum[5];	
	for(i=0;i<=4;i++)
{
cout<<"enter value in element"<<endl;
cin>>a[i];
}
for(i=0;i<=4;i++)
{
cout<<"enter value in element"<<endl;
cin>>b[i];
}
cout<<"1st+2nd=sum"<<endl;
for(i=0;i<=4;i++)
{

sum[i]=a[i]+b[i];

cout<<a[i]<<"+"<<b[i]<<"="<<sum[i]<<endl;
}

}
