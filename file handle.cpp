#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char name[20];
	int roll;
	ofstream out;
	out.open("student.txt");
	out<<"RaeesKhan"<<endl;
	out<<"39246"<<endl;
	out.close();
	ifstream in;
	in.open("student.txt");
	in>>name;
	in>>roll;
		cout<<"name is "<<name<<endl;
		cout<<"roll is "<<roll;
	in.close();

}
