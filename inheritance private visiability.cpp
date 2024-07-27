#include<iostream>
using namespace std;
class A{
    int a;
    public:
    int b;
    void get()
    {
        cout<<"enter value of A   ";
        cin>>a;
        cout<<"enter value of  B   ";
        cin>>b;
    }
    int ret(){
    return a;
    }
};
class B:A{
    int sum;
    public:
    void get1()
    {
        get();
        ret();
    }
    int in()
    {
        sum=b+ret();
        return sum;
        
    }
    void dis()
    {
        cout<<"the value of A is   "<<ret()<<endl<<"the value of B is   "<<b<<endl<<"the result is   "<<sum;
    }
};
int main()
{
    B s;
    s.get1();
    s.in();
    s.dis();
}
