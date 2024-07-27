#include<iostream>
using namespace std;
int main()
{
	int s1;
	int s2;
	int s3;
	int avg;
	char grade;
		cout<<"Enter 1st subject marks: ";
	cin>>s1;
	cout<<"Enter 2nd subject marks: ";
	cin>>s2;
	cout<<"Enter 3rd subject marks: ";
	cin>>s3;
	int sum=s1+s2+s3;
	avg=sum/3;
	
	if(avg>30)
	{
		if(avg>50)
		{
			if(avg>80)
			{
			grade='A';
			}else
			grade='B';
		}
		else
	grade='C';
	
	}
	else
	{
		grade='F';
	}
	
	cout<<"your grade is:  "<<grade<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	cout<<"your average is:  "<<avg<<endl;
	
	
	
	
	
	
}
