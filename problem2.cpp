#include<iostream>
using namespace std;
int main ()
{
	int n1=1, n2=2, temp = 0, answer=n2;
	while ((n1+n2) <= 4000000)
	{
			temp = n1+n2;
			n1 = n2;
			n2 = temp;
			if (n2%2==0)
			{
				answer += n2;
			}
	}
	cout<<"Sum : "<<answer;
	return 0;
}
