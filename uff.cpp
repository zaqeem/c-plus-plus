#include<iostream>
using namespace std;
char grade(int i)
{
	if(i>=90)
	return 'A';
	else if(i>=80)
return 'A';
else if(i>=70)
return 'B';
else if(i>=60)
return 'C';
else
return 'D';
}
int main()
{
	int marks;
	cout<<"enter your marks:  ";
	cin>>marks;
char gr=grade(marks);
cout<<"your grade is:   "<<gr;
return 0;	
}
