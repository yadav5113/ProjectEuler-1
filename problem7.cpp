#include<iostream>
using namespace std;

bool checkprime (int a);

int main ()
{
	int count=0;
	for (int i=2; i>0; i++)
	{
		if ( checkprime(i) )
		{
			++count;
			if (count == 10001)
				cout<<"10001st prime number is : "<< i;
		}
	}
	return 0;
}

bool checkprime (int a)
{
	bool temp= true;
	for(int i = 2; i <= a / 2; i++)
 	{
    	if(a % i == 0)
      		{
          		temp = false;
          		break;
      		}
	}
	return temp;
}
