#include<iostream>
using namespace std;
class array
{
	int a[5];
	int m;
	int mi;
	public :
		void inp();
		void out();
		void max();
		void min();
	};
	void array::inp()
	{
		cout<<"enter element in array:  "<<endl;
		for(int i=0;i<5;i++)
		{
			cin>>a[i];
		}
	}
		
void array::out()
{
	cout<<"your entered elements in array:  "<<endl;
	for(int i=0;i<5;i++)
	cout<<a[i];
}
void array::max()
{
	m=a[0];
	for(int i=0;i<5;i++)
	{
		if(a[i]>m)
		m=a[i];
	}
	cout<<"maximum is :  "<<m;
}
void array::min()
{
	mi=a[0];
	for(int i=0;i<5;i++)
	{
		if(a[i]<mi)
		mi=a[i];
	}
cout<<"minimum is :  "<<mi;
}
int main()
{
	array a;
	a.inp();
	a.out();
	a.max();
	a.min();
}
