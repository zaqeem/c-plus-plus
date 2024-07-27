#include<iostream>
using namespace std;
class book
{
	private:
	int book_id;
	int book_page;
	int price;
	public:
	void inp()
	{
	cout<<"enter book id:"<<ends;
	cin>>book_id;
	cout<<"enter book pages:"<<ends;
	cin>>book_page;
	cout<<"enter book price:"<<ends;
	cin>>price;
	}
	void out()
	{
		cout<<"book id:"<<ends<<book_id<<endl;
		cout<<"book page:"<<ends<<book_page<<endl;
		cout<<"book price:"<<ends<<price<<endl;
	}
void set(int a,int b,int c)
{
	book_id=a;
	book_page=b;
	price=c;
}
int getprice()
{
	return price;
}
};
int main()
{
book b,b1;
b.inp();
cout<<endl;
b1.set(2,444,3453);
cout<<"the costly book is:"<<endl<<endl;
if(b.getprice() > b1.getprice())
b.out();
else
b1.out();

}
