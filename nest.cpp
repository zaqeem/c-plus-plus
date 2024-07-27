#include<iostream>
using namespace std;
class num
{
	int a;
	public:
		void show()
		{
			cout<<"enter any number ";
			cin>>a;
			}
			int task()
			{
				int c;
				if(a%2==0)
				{
				
					c=0;
					return c;
				}else
				
				{
				c=a%2;
				return c;	
			}
			}
			void dd()
			{
				cout<<"remender is  "<<task();
			}
};
int main()
{
	num d;
	d.show();
	d.dd();
}

