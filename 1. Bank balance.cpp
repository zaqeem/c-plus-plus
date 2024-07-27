#include <iostream>
using namespace std;
main()
{
	int Bank_balance,a,b,c,d;
	cout<<" Enter your bank balance: ";
	cin>>Bank_balance;
	ABD:
	cout<<"1. Check balance "<<endl;
	cout<<"2. Cash Deposit "<<endl;
	cout<<"3. Cash withdrawal "<<endl;
	cout<<" Enter your option: "<<endl;
	cin>>a;
	switch(a)
	{
		case 1:
			cout<<" You have "<<Bank_balance<<" Rupees in Your account."<<endl;
			cout<<"1. End Program. "<<endl;
			cout<<"2. Repeat. "<<endl;
			cout<<" Enter your option ";
			cin>>c;
			if(c == 1)
			goto ABC;
			else if(c == 2)
			goto ABD;
			else
				goto ABS;
			break;
		case 2:
			cout<<" Enter the amount of money you want to deposit into account. ";
			cin>>b;
			Bank_balance = Bank_balance + b;
			cout<<" Adding money to your account "<<endl;
			cout<<" You have "<<Bank_balance<<" Rupees in Your account."<<endl;
			cout<<"1. End Program. "<<endl;
			cout<<"2. Repeat. "<<endl;
			cout<<" Enter your option ";
			cin>>c;
			if(c == 1)
			goto ABC;
			else if(c == 2)
			goto ABD;
			else
				goto ABS;
			break;
		case 3:
			cout<<" Enter the amount of money you want to withdraw from account: ";
			cin>>b;
			d = Bank_balance - b;
			if(d<0)
			{
				cout<<" Not enough balance. "<<endl;
				goto ABC;
			}
			else
			{
			    Bank_balance = Bank_balance - b;
			    cout<<" You withdrew "<<b<<" rupees from account."<<endl;
			    cout<<" Money left in account is "<<Bank_balance<<" rupees."<<endl;
			    cout<<"1. End Program. "<<endl;
			    cout<<"2. Repeat. "<<endl;
			    cout<<" Enter your option ";
			    cin>>c;
			    if(c == 1)
			    goto ABC;
			    else if(c == 2)
			    goto ABD;
			    else
				    goto ABS;
			    break;
		    }
			
			
		default:
			ABS:
			cout<<"Error in option: "<<endl;
			ABC:
		    cout<<"program Ended. ";
	}
}
