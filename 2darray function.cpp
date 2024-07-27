#include<iostream>
using namespace std;


int array(int arr[2][2])
{

	int a,b,m;
	m=arr[0][0];
	for(a=0;a<2;a++)
{
for(b=0;b<2;b++)
{
		
		if(arr[a][b]>m)	
			m=arr[a][b];
}
	
}
return m;
}
int main()
{
	int max;
int num[2][2];
for(int i=0;i<2;i++)

for(int j=0;j<2;j++)	
{
	cout<<"enter element :";
	cin>>num[i][j];
	}	


	max=array(num);
	cout<<"the maximum number is:  "<<max;

}
