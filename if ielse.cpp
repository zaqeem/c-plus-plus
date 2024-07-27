#include<iostream>
using namespace std;
int main ()
{
int salary;
int grade;
float bonus;
cout<<"enter your salary";
cin>>salary;
cout<<"enter your grade";
cin>>grade;
if(grade>15)
{
bonus=salary*50/100;
salary=salary+bonus;
cout<<"your total salary "<<salary;
}
else{

bonus=salary*25/100;
salary=salary+bonus;
cout<<"your total salary  "<<salary;
}



}






