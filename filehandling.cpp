#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char a[20];
    int roll;
    ofstream outfile("student");
    cout<<"enter your name   ";
    cin.get(a,20);
    cin.ignore();
    cout<<"enter your roll no  ";
    cin>>roll;
    outfile<<a<<endl;
    outfile<<roll<<endl;
    outfile.close();
    ifstream infile("student");
    cout<<"Name"<<ends<<a<<endl;
    cout<<"Roll"<<ends<<roll<<endl;
    infile.close();
    
    
    
}
