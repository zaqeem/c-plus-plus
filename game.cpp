#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
class guess{
	public:
		
		guess()
		{
		cout<<endl<<endl<<endl<<endl;
	

		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"+-------------------------------+"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"|-------------------------------|"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"|        WELCOME TO GAME        |"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"|-------------------------------|"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"+-------------------------------+"<<endl;
		}
		void dis(){
			cout<<endl<<endl;
int ch;
int time_take=1;
				srand(time(0));
		int com=rand()%100+1;
			cout<<"enter the number ";
		cin>>ch;
		while(ch!=com)
		{
			if(ch>100) {
									cout<<"sorry! not greater than 100 choice from 1 to 100 "<<endl;
								}
		else if(ch<com)
			{
				cout<<"your choice is low"<<endl;
							
							}
							else if(ch>com){
								cout<<"your choice is greater "<<endl;
								}
								else{
								break;
								}
								
								cin>>ch;
								time_take+=1;
								
							}
						cout<<"computer guess number is  "<<com<<" = user choice  "<<ch<<endl;
						cout<<"you guess number in "<<time_take<<" tries ";
		}	
};

main(){
	guess obj;
	
	obj.dis();
	
}
