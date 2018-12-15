#include<iostream>
using namespace std;
int main ()
{
	int sum1=0, sum2=0, temp=0;
	for (int i=1; i<=100; i++)
	{
		sum1 += (i * i);
		temp += i;
	}
	sum2 = (temp * temp);
	temp = sum2 - sum1;
	cout<<"Difference : "<<temp;
	return 0;
}
