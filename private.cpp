#include<iostream>
using namespace std;
class student
{
	int id;
 char name[20];
 int roll;
public:
	int in()
	{
		cout<<"enter student id:  ";
		cin>>id;
		cout<<"enter student name:  ";
	(name);
		cout<<"enter student roll:  ";
		cin>>roll;
	}
	void out()
	{
		cout<<"student id is :   "<<id<<endl;
	cout<<"student name is:  "<<name<<endl;
	cout<<"student roll:  "<<roll;
	}
};
int main()
{
	student s;
	s.in();
	s.out();

}




