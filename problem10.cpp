#include <iostream>
#include <cmath>
using namespace std;
long long prime(long long n)
{

	if (n%2 == 0)
		return 0;
	for (long long i=3; i <= sqrt(n); i += 2)		//You can also use pow(n,0.5), but it'a take 2.2 sec to execute (approx)
	{							//This will only take 0.95 sec to execute (approx)
		if (n%i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	unsigned long long sum = 0;
	for (int i=3; i<2000000; i += 2)
	{
		if (prime(i))
			sum += i;
	}
	cout << sum + 2;					//2 was skipped or you may initialize sum with 2 instead of 0
	return 0;
}
