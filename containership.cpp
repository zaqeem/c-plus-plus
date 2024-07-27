#include<iostream>
using namespace std;
class A{
    int marks[2];
    public:
    void in()
    {
        for(int i=0;i<2;i++)
     {   cout<<"enter marks   ";
        cin>>marks[i];
     }
         
     }
    void out()
    {
        int t=0;
        cout<<"result   "<<endl;
        for(int i=0;i<2;i++)
        {cout<<"mark   "<<marks[i]<<endl;
        t=t+marks[i];
        }
        cout<<endl<<"total marks    "<<t<<endl<<"average   "<<float(t)/3.0;
    }
    };
    class B{
        int roll;
        char name[50];
        A b;
        public:
        void in()
        {
            cout<<"enter roll  ";
            cin>>roll;
            cout<<"enter name   ";
            cin>>name;
          
            b.in();
        }
        void out()
        {
            cout<<"roll   "<<roll<<endl<<"name   "
<<name<<endl;


 b.out();
}    };
    int main()
    {
        B c;
        c.in();
        c.out();
    }

