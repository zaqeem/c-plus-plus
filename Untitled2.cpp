#include<iostream>
using namespace std;
int main()
{
	int ch;
	int r;
	const float pi=3.14;
	int cir;
	cout<<"enter your choice: ";
	cin>>ch;
	cout<<"enter radius of circle: ";
	cin>>r;
	cout<<"enter circumference of circle: ";
	cin>>cir;
	if(ch==0)
	{
	float r=pi*r*r;
	cout<<"radius of circle: "<<r;
}
else if(ch==1)
{
		float cir=2*pi*r;
	cout<<"circumference of circle: "<<cir;
	}
	else
	{
	cout<<"invild your choice!";
}
}


















