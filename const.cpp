#include<iostream>
#include<string.h>
using namespace std;
class car
{
	char brand[10];
	char model[7];
	int price;
	public:
		car(char a[],char b[],int c)
		{
			strcpy(brand,a);
			strcpy(model,b);
			price=c;
		}
void change(char d[],char e[],int f)
{
	strcpy(brand,d);
	strcpy(model,e);
	price=f;
	}
void out()
{
	cout<<"brand name:"<<ends<<brand<<endl;
	cout<<"model name:"<<ends<<model<<endl;
	cout<<"price is:"<<ends<<price<<endl;
}
};
int main()
{
	car obj("tesla","burn",500000);
cout<<"before changing:"<<endl<<endl<<endl;
obj.out();
obj.change("Mercedes","GLS",1000000);
cout<<endl<<endl<<"after changing:"<<endl<<endl<<endl;
obj.out();
}



