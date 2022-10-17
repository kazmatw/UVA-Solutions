#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int sets, num, n, i;

    double p, pi;
    cin >> sets;
    for (num = 0; num < sets; num++)
    {
        cin >> n >> p >> i;
        if (p < 0.00001)
        {
            printf("0.0000\n");
        }
        else
        {
            pi = pow(1 - p, i - 1) * p / (1 - pow(1 - p, n));
            printf("%.4lf\n", pi);
        }
    }
    return 0;
}
