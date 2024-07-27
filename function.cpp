#include<iostream>
using namespace std;

int table(int a)
	 {
	 	
	 	int c;
	 	cout<<"table of "<<a<<endl;
	 	for(c=1;c<=10;c++)
	 	{
		 cout<<a<<"*"<<c<<"="<<a*c;
		  cout<<endl;
		  }  
	}
	 int main()
 {   
 int x;
cout<<"enter any number";
cin>>x;
table( x);
}
