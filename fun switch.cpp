#include <iostream>
using namespace std;
void even_odd(int i)
{
	switch(i%2)
{
	case 1:
		cout<<i<<" is odd number";
		break;
		case 0:
			cout<<i<<"is even number";
			break;
			default:
			cout<<"invalid ";	
	
}


}

int main()
{
int a;
cout<<"enter any value: ";
cin>>a;
even_odd(a);
}





	

