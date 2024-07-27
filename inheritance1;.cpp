
#include <iostream>
using namespace std;
class A{
    int a;
    public:
    void get()
    {
        cout<<"enter value of A   ";
        cin>>a;
    }
    int ret(){
        return a;
    }
};
class B:public A
{
    int b,sum;
    public:
    void in()
    {
        cout<<"enter value of B   ";
        cin>>b;
    }
    int add()
    {
        sum=ret()+b;
        return sum;
    }
    void display()
    {
        cout<<"the value of A is  "<<ret()<<endl;
        cout<<"the value of B is   "<<b<<endl;
        cout<<"the sum is   "<<sum;
    }
    
};
int main(){
B s;
s.get();
s.ret();
s.in();
s.add();
s.display();
}
