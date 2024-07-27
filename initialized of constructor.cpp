#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    int b;
    public:
    A(int aa,int bb):a(aa),b(bb)
    {
    cout<<"A  is initialized\n";
    }
    void dis(){
        cout<<"a is    "<<a<<endl;
        cout<<"b is    "<<b<<endl;
    }
};
class B{
    protected:
    int d,e;
    public:
    B(int dd,int ee):d(dd),e(ee){
        cout<<"B is initialized\n";
    }
    void dis(){
        
        cout<<"d is   "<<d<<endl;
        cout<<"e is   "<<e<<endl;
    }
    
};
class C:public A,public B{
    int m,n;
    public:
    C(int aaa,int bbb,int ddd,int eee,int mm,int nn):A(aaa,bbb),B(ddd,eee),m(mm),n(nn)
    {
        cout<<"C is initialized\n";
    }
    void dis(){
        A::dis(),B::dis();
        cout<<"m is   "<<m<<endl;
        cout<<"n is   "<<n;
    }
};
int main(){
    C c(23,34,53,43,32,33);
    c.dis();
}
