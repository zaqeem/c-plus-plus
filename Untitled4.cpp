
#include<iostream>
using namespace std;
int square(int a)
{
	return a*a;
}
int cube(int b)
{
	return b*b*b;
	
}
int main()
{
	int i;
	int j;
	cout<<"Enter two values:  ";
	cin>>i>>j;
	int sqr=square(i);
	int cu=cube(j);
	cout<<"the square of "<<i<<"  is  "<<sqr<<endl<<"the cube of  "<<j<<"  is  "<<cu;
}
