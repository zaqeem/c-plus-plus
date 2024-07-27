#include<iostream>
using namespace std;
int main()
{
	char str[20];
	int a=0;
	int i=0;
	cout<<"enter string: ";
	cin.getline(str,20);
	while(str[i]!='0')
	{
		switch(str[i])
		{
		case'a':
			case 'e':
				case 'i':
					case 'o':
						case 'u':
							a++;
						}
						i++;
						
	}
		
	cout<<"your string is\t"<<str<<endl<<"which have\t"<<a<<"   vowel";
	}
	

