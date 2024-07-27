#include<iostream>
using namespace std;
struct book
{
	int page;
	int price;
};
book fun(book i,book j)
{
if(i.price>j.price)
return i;
else 
return j;
}


int main()
{
	book a,b,r;
	cout<<"enter page of book: ";
	cin>>a.page;
	cout<<"enter price of book:  ";
	cin>>a.price;
	cout<<"enter page of book:  ";
	cin>>b.page;
	cout<<"enter price of book:  ";
	cin>>b.price;
	 r=fun(a,b);
	cout<<"the costly book is: "<<endl<<"pages:  "<<r.price<<endl<<"Price:  "<<r.page;
}
