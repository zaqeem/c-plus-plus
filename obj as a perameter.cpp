
#include <iostream>
using namespace std;
class object{
    int km;
    int hr;
    public:
    void get()
    {
        cout<<"enter kilometer  ";
        cin>>km;
        cout<<"enter hours  ";
        cin>>hr;
    }
    void show()
    {
        cout<<"kilometer  "<<km<<endl;
        cout<<"hours  "<<hr;
    
    }
    int add(object t,object f)
    {
        
        km=t.km+f.km;
        hr=t.hr+f.hr;
    }
};
int main()
{
    object a,b,c;
    a.get();
    cout<<endl;
    b.get();  
    cout<<endl;
  
    a.show();
    cout<<endl;
    b.show();
    cout<<endl;
    c.add(a,b);
    cout<<endl;
    cout<<"total is  ";
    c.show();

    return 0;
}
