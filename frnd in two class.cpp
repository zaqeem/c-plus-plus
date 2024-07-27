#include<iostream>
using namespace std;
class frnd
{
	int a;
	
	public:
		void get()
		{
			cout<<"enter two numbers :   ";
			cin>>a;
		}
		void add();
};
class frn1
{
	int b;
	public:
		void gget()
		{
			cin>>b;
		}
		friend void frnd::add();
};
void frnd::add()
{
frnd d;
frn1 e;
d.get();
e.gget();
cout<<"addition is"<<d.a+e.b;	
};
int main()
{
	frnd j;
	j.add();
}

