#include <iostream>
#include <math.h>
using namespace std;

int palindrom(int num);

int main()
{
    unsigned int n = 0;
	unsigned int largest = 0;
	for (int n1=999, n2=999; n1>=100; n2--)
    {
        if (n2 < 100)
        { 
            n1--; 
            n2 = 999; 
            continue; 
        }

        if (palindrom(n1*n2) == n1*n2)
        {
            if (largest < n1*n2)
                largest = n1*n2;
        }
    }

    cout << "Largest Palindrome : " << largest;
	return 0;
}

int palindrom(int num)
{
    int reverse = 0;
    int digit = 0;

    while (num != 0)
    {
        digit = num % 10;
        reverse = reverse*10 + digit;
        num /= 10;
    }

    return reverse;
}
