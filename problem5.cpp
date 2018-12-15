#include<iostream>
using namespace std;
bool check (int a);
int main ()
{
	bool decision = false;
	for (int i=21; i>0; i++)
	{
		decision = check (i);
		if (decision == true)
		{
			cout<<"The smallest number : "<< i;
			break;
		}
	}
	return 0;
}

bool check (int a)
{
	bool temp = true;
	for (int i=1; i<=20; i++)
	{
		if ( (a%i) != 0)
		{
			temp = false;
			break;
		}
	}
	return temp;
}
