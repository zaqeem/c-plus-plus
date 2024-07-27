#include<iostream>
using namespace std;
int main()
{
	int year=21;
	int mouth,days,hours,min,sec;
	mouth=year*12;
	days=year*12*30;
	hours=year*12*30*24;
	min=year*12*30*24*60;
	sec=year*12*30*24*60*60;
	cout<<"year   "<<year<<endl<<"mouth   "<<mouth<<endl<<"days   "<<days<<endl<<"hour  "<<hours<<endl<<"min   "<<min<<endl<<"sec   "<<sec<<endl;
}
