#include<iostream>
using namespace std;
struct book
{
	int page;
	int price;
};

int input(book *a)
{
	
	cout<<"enter page: ";
	cin>>a->page;
	cout<<"enter price: ";
	cin>>a->price;
	cout<<endl;
	cout<<a->page;
	cout<<endl<<endl;
	cout<<a->price;

}
int main()
{

book b;
input(&b);

}

