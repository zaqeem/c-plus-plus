#include<iostream>
using namespace std;
class student 
{
	private:
	int roll;
	char name[19];
	public:
		void fun();
		void fun1()
		{
			cout<<"your roll is: "<<roll<<endl;
			cout<<"your name is: "<<name<<endl;
}
};
void student::fun(void)
{
	cout<<"enter your roll no:  ";
	cin>>roll;
	cout<<"enter your name:  ";
	cin>>name;
	cout<<endl;
}
int main()
{
	student obj;
	obj.fun();
	obj.fun1();
}
