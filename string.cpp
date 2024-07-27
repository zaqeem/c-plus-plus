#include<iostream>

using namespace std;
void khan()
{
	int a=3;
	static int b=5;
	cout<<a<<ends<<b<<endl;
     a++;b++;
	}	
	int main()
	{
		khan();
		khan();
		khan();
	}

