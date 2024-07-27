#include<iostream>




using namespace std;
class bank{
	double amount=20000;        
	double withdraw;            
	double deposit;            
	 public:
	 	void menu()
	 	{
	 		cout<<endl<<endl<<endl<<endl;
	 		cout<<"\t\t\t"<<"\t**********MENU OF ATM************"<<endl;
	 		cout<<"\t\t\t"<<"\t*                               *"<<endl;
	 		cout<<"\t\t\t"<<"\t*                               *"<<endl;
	 		cout<<"\t\t\t"<<"\t*                               *"<<endl;
	 		cout<<"\t\t\t"<<"\t*         1 CHECK BALANCE:      *"<<endl;
	 		cout<<"\t\t\t"<<"\t*         2 DEPOSIT MONEY:      *"<<endl;
	 		cout<<"\t\t\t"<<"\t*         3 WITHDRAW MONEY:     *"<<endl;
	 		cout<<"\t\t\t"<<"\t*                               *"<<endl;
	 		cout<<"\t\t\t"<<"\t*                               *"<<endl;
	 		cout<<"\t\t\t"<<"\t*                               *"<<endl;
	 		cout<<"\t\t\t"<<"\t*                               *"<<endl;
	 		cout<<"\t\t\t"<<"\t*********************************"<<endl;
	 		
		 }
	void check()
	{
		system("CLS");
		cout<<endl<<endl<<endl<<endl<<endl;
		cout<<"\t\t\t your total balance is     "<<amount<<endl<<endl<<endl<<endl<<endl;	  
	}	
	void dep()
	{
		system("CLS");
		cout<<endl<<endl<<endl<<endl<<endl;
		cout<<"enter how much you want deposit   ";
		cin>>deposit;
		if(deposit==0)
		{
			system("CLS");
			cout<<endl<<endl<<endl;
			cout<<"NO DEPOSIT MONEY  "<<endl<<endl<<endl;
			cout<<"\n\n your curent balance is   "<<amount;
		}
		else
		{
			deposit+=amount;
			cout<<" DEPOSIT SUCESSFULLY"<<endl<<endl<<endl;
			cout<<"\n\n your current balance is     "<<deposit;
	}
	 }
	 void with()
	 {
	 	system("CLS");
	 	cout<<endl<<endl<<endl<<endl<<endl;
	 	cout<<"ENTER HOW MUCH YOU WANT TO WITHDRAW  ";
	 	cin>>withdraw;
	 	if(withdraw<=amount)
	 	{
	 		system("CLS");
	 		amount-=withdraw;
	 		cout<<endl<<endl<<endl;
	 		cout<<"SUCESSFULLY WITHDRAW"<<endl<<endl<<endl;
	 		cout<<"YOUR CURRENT BALANCE IS "<<amount;
		 }
		 else
		  {
		  	system("CLS");
		  	cout<<endl<<endl<<endl;
		  	cout<<"INSUFFICIENT BALANCE"<<endl<<endl<<endl;
			  cout<<"your current balance is  "<<amount;
			  		 	
		 }
	 }
};
main()

 {
    char playAgain;
    do {
    		system("CLS");
        bank obj;
        obj.menu();
        int choice;
        cout << endl << endl << endl;
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << endl << endl << endl;
                obj.check();
                break;
            case 2:
                cout << endl << endl << endl;
                obj.dep();
                break;
            case 3:
                cout << endl << endl << endl;
                obj.with();
                break;
            default:
                cout << "Invalid choice" << endl;
        }
        
        cout << "\n\n\nDo you want to continue (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}
