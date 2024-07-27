#include<iostream>
using namespace std;
int main()
{
	int uv=0;
	int lv=0;
	int uc=0;
	int lc=0;
	char str[50];
	cout<<"enter sentence:  "<<endl;
	cin.getline(str,50);
	for(int i=0;str[i]!='0';i++)
	{
		if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'||str[i]=='u')
	{
	lv++;
}
else if(str[i]=='A'||str[i]=='I' || str[i]=='E'||str[i]=='O'||str[i]=='U')
	{
	uv++;
	}
else if(str[i]>=65 && str[i]<=97)
uc++;
else if(str[i]>=97 && str[i]<=122)
lc++;
}
cout<<"your sentence:  "<<endl;
cout<<"lowest vowel: "<<lv<<endl<<"upper case vowel: "<<uv<<endl<<"lower case constonant:   "<<lc<<endl<<"upper case constonant:  "<<uc;

}



