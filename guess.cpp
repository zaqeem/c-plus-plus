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
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"+-------------------------------+"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"+           +"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"+-------------------------------+"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"+-------------------------------+"<<endl;
		}
		void dis(){
int ch;
				srand(time(0));
		int com=rand()%100+1;
			cout<<"enter the number ";
		cin>>ch;
		while(ch!=com)
		{
			if(ch<com)
			{
				cout<<"your choice is low"<<endl;
							cin>>ch;
							}
							else if(ch>com){
								cout<<"your choice is greater "<<endl;
								cin>>ch;
								}else {
									cout<<"good it is correct";
								}
							}
							cout<<com;
		}
		
	
};



main(){
	guess obj;
	
	obj.dis();
	
}
