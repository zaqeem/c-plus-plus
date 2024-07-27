#include<iostream>
using namespace std;
class object
{
	int a[4][5];
	public:
		void get()
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<4;j++)
				{
					cin>>a[i][j];
				}
			}
		}
		void out()
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<4;j++)
				{
					cout<<a[i][j];
				}
			}
		}
		object add(object as,object ss)
		{
			object d;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<4;j++)
				{
					d.a[i][j]=as.a[i][j] + ss.a[i][j];
				}
			}
			return(d);
		}
};
int main()
{
	object asa,ds,f,r;
	cout<<"enter matrix a  "<<endl;
	asa.get();
	cout<<"enter matrix b  "<<endl;
	ds.get();
	cout<<"matrix a is "<<endl;
	asa.out();
	cout<<endl;
	cout<<"matrix b is  "<<endl;
	ds.out();
	cout<<endl;
	r=f.add(asa,ds);
	cout<<"addition is "<<endl;
	r.out();
}
