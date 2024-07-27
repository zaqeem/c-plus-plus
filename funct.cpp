#include<iostream>
using namespace std;
main(){
	int age;
	cout<<"enter your age   ";
	cin>>age;
	if(age<20)
	{
		cout<<"You are underage "<<endl;
		cout<<"You are not allowed";
		goto ABC;
	}
	else if (age>20 && age<40){
		cout<<"you are adult"<<endl;
		cout<<"You are allowed to enter the movies"<<endl;
	}
	else{
		cout<<"you are over aged"<<endl;
		goto ABC;
	}
	cout<<"you are allowed"<<endl;
	cout<<"wellcome to show "<<endl;
	cout<<"add more statement "<<endl;
	goto ABD;
	ABC:
	cout<<"Program Ended";
	ABD:
		cout<<" ";
}
