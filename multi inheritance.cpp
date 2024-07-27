#include<iostream>
using namespace std;

class A{
    protected:
    int a;
    public:
    void get()
    {
        cout<<"enter value of  A   ";
        cin>>a;
    }
};
class B{
    protected:
    int b;
    public:
    void in()
    {
        cout<<"enter value of B   ";
        cin>>b;

    }
    };
class C:public A,public B
{
  int sum;
  public:
  void add()
  {
      sum=a+b;
  }
  void dis()
  {
      cout<<"the value of A is   "<<a<<endl<<"the value of B is   "<<b<<endl<<"the result is   "<<sum;
  }
};
int main()
{
    C d;
    d.get();
    d.in();
    d.add();
    d.dis();
}
