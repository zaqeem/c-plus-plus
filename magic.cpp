#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class atm
{
	double balance=5000000;
	double withdraw;
	double deposit;
	int ch;
	
	public :
		void menu();
		void show();
		
};
void atm::menu()
{
	cout<<endl<<endl<<endl<<endl<<endl;
	cout<<setw(70)<<"************WELLCOME TO  ATM MACHINE************"<<endl;
	cout<<setw(70)<<"*                                              *"<<endl;
	cout<<setw(70)<<"*                                              *"<<endl;   
	cout<<setw(70)<<"*                  Enter Your Pin              *"<<endl;
	cout<<setw(70)<<"*                                              *"<<endl;
	cout<<setw(70)<<"*                                              *"<<endl;

	cout<<setw(70)<<"************************************************"<<endl;                                       





}

void atm::show()
{
system("cls");
cout<<endl<<endl<<endl<<setw(70)<<"";
}

























































int main()
{
	int pin;
	int a=39246;
	atm obj;
	obj.menu();

	cout<<endl<<endl<<endl<<"Enter your pin:"<<ends;
cin>>pin;
if(pin==a)
{
obj.show();
}
else
{
system("cls");
cout<<endl<<endl<<"wrong pin try again";
obj.menu();

}
}
