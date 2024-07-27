#include<iostream>
using namespace std;
class add
{
	int a;
	int b;
	public:
		void get()
		{
			cout<<"enter two number "<<endl;
			cin>>a>>b;
			
		}
		void show()
		{
			cout<<"your entered number  "<<endl;
			cout<<a<<endl<<b;
		}
		friend int sum(add);
		};
		int sum(add d)
		{
			
			int f;
			d.get();
			d.show();
			cout<<endl;
			f=d.a + d.b;
			cout<<endl<<"addition is ";
			cout<<f;
		
		}
		int main()
		{
			add d;
			sum(d);
		}
			
			
		
