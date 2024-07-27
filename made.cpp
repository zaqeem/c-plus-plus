#include<iostream>
using namespace std;
int main()
{
	int age[];
	int count=0;
	int i;
	int x;
	cout<<"Enter number of persons required:  ";
	cin>>i;
	cout<<"Enter age of  "<<i<<"  persons"<<endl;
	for(x=0;x<i;x++)
	{
	cin>>age[x];

if(age[x]>=40 && age[x]<=50)

count++;
}
cout<<count<<"   age of person between 40 and 50";


}
