#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		A(int x)
		{
			a=x;
			cout<<"\nA is initialzied"<<endl;
		}
		void get()
		{
			cout<<"a is   "<<a;
		}
		
};
class B:public A{
	int b;
	public:
		B(int d,int e):A(d)
		{
			b=e;
			cout<<"\nB is initialzied"<<endl;
		}
		void get()
		{
			A::get();
			cout<<"b is  "<<b;
		}
		
};
class C:public B{
	int c;
	public:
		C(int d,int j,int f):B(d,j)
{
	c=f;
	cout<<"\nC is initialzied"<<endl;
}
void get()
{
	B::get(),A::get();
	cout<<"c is  "<<c;
}
};
int main()
{
	C ff(1,2,3);
	ff.get();
}
