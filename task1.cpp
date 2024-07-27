#include<iostream>
#include<string>
using namespace std;
class player{
	private:
		char name[20];
		double average;
		char team[30];
	public:
		player(){
			inputattributes();
		}
		void inputattributes(){
			cout<<"enter player's name:   ";
			cin.get(name,20);
			cout<<"enter player's average:   ";
			cin>>average;
			cout<<"enter player's team:    ";
			cin.ignore();
			cin.get(team,30);
			cin.ignore();
		}
		void changeattributes(){
			cout<<"enter new player's name:   ";
			cin.get(name,20);
			cout<<"enter new player's average:   ";
			cin>>average;
			cout<<"enter new player's team:  ";
			cin.ignore();
			cin.get(team,30);
		}
		void display(){
			cout<<"player's name:  "<<name<<endl;
			cout<<"player's average:  "<<average<<endl;
			cout<<"player's team:   "<<team<<endl;
		}
	};
	int main(){
		player p;
		cout<<"   \n\n\toutput\n     "<<endl;
		p.display();
		cout<<endl;
		p.changeattributes();
		cout<<endl<<endl<<"\toutput   "<<endl;
		p.display();
	}
