#include<iostream>
using namespace std;
struct Exam
{
	int rollno;
	int marks[5];
};
int main()
{
	Exam a;
	int c;
	int sum=0;
	float avg=0.0;
	cout<<"Enter Rollno= ";
	cin>>a.rollno;
	for(c=0;c<=4;c++)
	{
		cout<<"enter marks=";
		cin>>a.marks[5];
		sum=sum+a.marks[5];
	}
	avg=sum/5;
	cout<<endl<<"total marks  "<<sum<<endl<<"avg  "<<avg;

}
