#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"enter your age  ";
	cin>>age;
	if(age<20)
	{
	cout<<"your are child ";
}
	else if(age>20  &&  age<40)
	{
		cout<<"your are young  ";
	goto allowed;
}
	else{	
	cout<<"you are old  ";

}
cout<<"you are not allowed ";
return 0;
allowed:
cout<<"you are allowed ";
cout<<"welcome to show ";
}
