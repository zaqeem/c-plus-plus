#include<iostream>
#include<string.h>
using namespace std;
class ada{
    static int a;
    int roll;
    int marks;
    char name[10];
    public:
ada()
    {
        a++;
        roll=a;
    }
    void in()
    {
        
        cout<<"enter your name ";
        gets(name);
        cout<<"enter your marks ";
    cin>>marks;
    cin.ignore();
    
    }
    void put()
    {
        cout<<"your roll is"<<ends<<roll<<endl;
        cout<<"your name is"<<ends<<name<<endl;
        cout<<"your marks is"<<ends<<marks<<endl;
        
    }
};
int ada::a=0;
int main()
{
    ada e,b,d;
    e.in();
    b.in();
    d.in();
    e.put();
    b.put();
    d.put();
      
}
