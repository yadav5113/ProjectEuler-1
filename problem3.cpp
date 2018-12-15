#include<iostream>
using namespace std;
int main ()
{
    long long gf = 600851475143;

    for (long long i = 3; i <= gf; i += 2)
    {
        if (gf % i == 0)
        {
            if (gf / i >= i)
            {
                gf /= i;
                i -= 2;
            }
        }
    }

    cout << "The largest prime factor of the number 600851475143 is: " << gf << endl;
    return 0;
}
