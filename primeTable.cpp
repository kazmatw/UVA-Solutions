#include <iostream>
#include <iomanip>
#include <cmath>
#define Max 9999999
using namespace std;

int n[Max], primes[Max], pnum;

void generatePrimeTable()
{
    int sqrtMax = sqrt(Max);
    primes[0] = 2;
    pnum = 1;
    for (int i = 3; i < sqrtMax; i += 2)
    {
        if (n[i] == 0)
        {
            // j=i*i：因為一個數的質因數分解必有一個數小於等於他的平方根
            for (int j = i * i; j < Max; j += 2 * i)
            {
                n[j] = 1;
            }
        }
    }
    //把質數加到primes裡
    for (int i = 3; i < Max; i += 2)
    {
        if (n[i] == 0)
        {
            primes[pnum++] = i;
        }
    }
}

int main()
{
    generatePrimeTable();
    for (int i = 0; i < 100; i++) //印100個
    {
        cout << setw(3) << primes[i] << " ";
        if (i % 10 == 9)
        {
            cout << endl;
        }
    }
}