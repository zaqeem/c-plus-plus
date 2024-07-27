#include<iostream>
using namespace std;
class frnd1;
class frnd
{
	int a;
	public:
		void get();
		friend void out(frnd,frnd1);
	};
	class frnd1
	{
		int b;
		void get();
		friend void out(frnd,frnd1);
	};
	void frnd::get()
	{
		cout<<"enter number:  ";
		cin>>a;
	}
	void frnd1::get()
	{
		cout<<"enter number:  ";
		cin>>b;
	}
	void out(frnd d,frnd1 e)
	{
		d.get();
		e.get();
		cout<<"addition is:  "<<d.a+e.b;
	}
	int main()
	{
		frnd t;
		frnd1 w;
		out(t,w);
		
	}
