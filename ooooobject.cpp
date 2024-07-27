#include<iostream>
using namespace std;

class A {
    int a;
    int b;
public:
    void aa() {
        cout << "Enter any two numbers: ";
        cin >> a >> b;
    }
    int re() {
        return a;
    }
    int ret() {
        return b;
    }
    int sum;
};

class B : public A {
     // Changed add to sum as there is a function with the same name.
public:
    void add() {
        sum = re()+ret();  // Calculate sum using the re() and ret() functions of A.
    }
    void dis() {
        cout << "a: " << re() << endl << "b: " << ret() << endl << "sum: " << sum << endl;
    }
};

int main() {
    A obj;
    A* pobj;
    pobj = &obj;
    pobj->aa();
    pobj->re();
    pobj->ret();  // Added a call to ret() to avoid unused function warnings.

    B obj1;
    B *pobj1;
    pobj1=&obj1;
    pobj1->add();
    pobj1->dis();
    return 0;  // Added a return statement to end the main function.
}
