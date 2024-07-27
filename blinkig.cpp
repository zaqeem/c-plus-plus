#include<iostream>
using namespace std;
struct book
{
	char name[20];
int price;
};
int b1(book &y)
{
	
y.price=y.price*2;	
}
int main()
{
	book b;
	cout<<"enter author name : ";
	cin.get(b.name,20);
	cout<<"enter the Price: ";
	cin>>b.price;
	b1(b);
	cout<<"author name: "<<b.name<<endl;
	cout<<"Price: "<<b.price;	
	
	
}



	
