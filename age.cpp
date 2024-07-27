#include <iostream>
using namespace std;

int main() {
    int age_years;
    cout << "Enter your age in years: ";
    cin >> age_years;
    
    int age_months = age_years * 12;
    int age_days = age_years * 365;

    cout << "Your age in months is " << age_months << endl;
    cout << "Your age in days is " << age_days << endl;

    return 0;
}

