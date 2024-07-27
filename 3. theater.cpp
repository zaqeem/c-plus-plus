#include <iostream>
#include <ctime>
using namespace std;
void movie(void);
main()
{
	int a;
	cout<<" Enter Your Age: ";
	cin>>a;
	if(a<21 && a>0)
	{
		cout<<" You Are Under aged"<<endl;
		cout<<" You Are Not Allowed To Enter The Movies"<<endl;
		goto ABC;
	}
	else if(a>=21 && a<=40)
	{
		cout<<" You Are Adult"<<endl;
		cout<<" You Are Allowed To Enter The Movies"<<endl;
		movie();
		goto ABS;
	}
	else
    {
    	cout<<" You Are Old"<<endl;
    	cout<<" You Are Not Allowed To Enter The Movies"<<endl;
    	goto ABC;
	}
	ABC:
		cout<<" program ended";
	ABS:
		cout<<"";
}
void movie()
{
	char type;
	int number;
	int seat = 12;
	cout<<" Which Movie Would You Like To Watch: "<<endl;
	cout<<endl;
	cout<<"enter code for movie type: "<<endl;
	cout<<"A = Adventure"<<endl<<"C = Comedy"<<endl<<"F = Family "<<endl<<"H = Horror"<<endl<<"S = Sci Fi"<<endl;
	cin>>type;
	switch(type)
	{
		case 'A':
			cout<<"List of adventure movies..."<<endl;
			cout<<"1. Raiders Of The Lost Ark. "<<endl;
			cout<<"2. Jurrasic Park. "<<endl;
			cout<<"3. Inception. "<<endl;
			cin>>number;
			break;
		case 'a':
			cout<<"List of adventure movies..."<<endl;
			cout<<"1. Raiders Of The Lost Ark. "<<endl;
			cout<<"2. Jurrasic Park. "<<endl;
			cout<<"3. Inception. "<<endl;
			cin>>number;
			break;
		case 'C':
			cout<<"List of Comedy movies..."<<endl;
			cout<<"1. Through MY Window. "<<endl;
			cout<<"2. The Sea Beast. "<<endl;
			cout<<"3. Thank God. "<<endl;
			cin>>number;
			break;
		case 'c':
			cout<<"List of Comedy movies..."<<endl;
			cout<<"1. Through MY Window. "<<endl;
			cout<<"2. The Sea Beast. "<<endl;
			cout<<"3. Thank God. "<<endl;
			cin>>number;
			break;
		case 'F':
			cout<<"List of Family movies..."<<endl;
			cout<<"1. Spirit Untamed. "<<endl;
			cout<<"2. Cinderella. "<<endl;
			cout<<"3. Matilda. "<<endl;
			cin>>number;
			break;
		case 'f':
			cout<<"List of Family movies..."<<endl;
			cout<<"1. Spirit Untamed. "<<endl;
			cout<<"2. Cinderella. "<<endl;
			cout<<"3. Matilda. "<<endl;
			cin>>number;
			break;
		case 'H':
			cout<<"List of Horror movies..."<<endl;
			cout<<"1. Viking Wolf. "<<endl;
			cout<<"2. The Invitation. "<<endl;
			cout<<"3. Seperation. "<<endl;
			cin>>number;
			break;
		case 'h':
			cout<<"List of Horror movies..."<<endl;
			cout<<"1. Viking Wolf. "<<endl;
			cout<<"2. The Invitation. "<<endl;
			cout<<"3. Seperation. "<<endl;
			cin>>number;
			break;
		case 'S':
			cout<<"List of Science Fiction movies..."<<endl;
			cout<<"1. The Adam Project. "<<endl;
			cout<<"2. Spider Head. "<<endl;
			cout<<"3. Oxygen. "<<endl;
			cin>>number;
			break;
		case 's':
			cout<<"List of Science Fiction movies..."<<endl;
			cout<<"1. The Adam Project. "<<endl;
			cout<<"2. Spider Head. "<<endl;
			cout<<"3. Oxygen. "<<endl;
			cin>>number;
			break;
		default:
			cout<<"Invalid Input!";
	}
	cout<<" You Selected '"<<type<<"' Type Movie and option: "<<number<<endl;
	cout<<" Your Seat is "<<seat<<endl;
}

