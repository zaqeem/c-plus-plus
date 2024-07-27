#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[5][10];
	char ch;
	int i;
	cout<<"enter country names: ";
	for(i=0;i<5;i++)
	{
		cin>>str[i];
		
	}
	for(i=0;i<5;i++)
	{
	ch=str[i][0];
	switch(ch)
	{
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	cout<<endl<<endl<<"the country which started from vowels:   "<<endl<<str[i]<<endl<<ch;
	}
}
}
