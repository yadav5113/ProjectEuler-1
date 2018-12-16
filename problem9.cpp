#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
	int a,result;
	for (int i=0; i<1000; i++)
	{
		for (int j=0; j<1000; j++)
		{
			a = sqrt(pow(i,2)+pow(j,2));
			if (pow(i,2)+pow(j,2) == pow(a,2) && i<j)
			{
				if ( (a+i+j) == 1000)
					result = a*i*j;
			}
		}
	}
	cout<<result;
	return 0;
}
