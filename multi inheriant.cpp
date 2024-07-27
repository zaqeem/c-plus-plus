#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    void ge(){
        cout<<"enter value of A  ";
        cin>>a;
    }
    int re(){
        return(a);
    }
};
class B
{
    protected:
    int b;
    public:
    void get()
    {
        cout<<"enter value of b  ";
        cin>>b;
}
int ret()
{
    return(b);
}
};
class C:A,public B{
    private :
    int sum,sub,m,di;
    public:
    void a()
    {
        ge();
        re();
    }
    void b()
    {
        get();
        
    }
    void add(){
        sum=re()+ret();
    }
    void sb()
    {
        sub=re()-ret();
    }
    void mul()
    {
        m=re()*ret();
    }
    void dv()
    {
        di=re()/ret();
    }
    void dis(){
        cout<<"the value of a is  "<<re()<<endl;
        cout<<"the value of b is  "<<ret()<<endl<<endl<<endl;
        cout<<"sum         "<<sum<<endl;
        cout<<"subtract    "<<sub<<endl;
        cout<<"product     "<<m<<endl;
        cout<<"divide      "<<di;
    }
};
int main()
{
    C d;
    d.a();
    d.b();
    d.add();
    d.sb();
    d.mul();
    d.dv();
    d.dis();
}
