#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        double x, k, a, b;
        cin >> x >> k;
        a = floor(x / k);
        b = ceil(x / k);
        bool check = 0;
        for (int i = 0; i <= ceil(x / a); i++)
        {
            for (int j = 0; j <= ceil(x / b); j++)
            {
                if ((i * a + j * b) == x)
                {
                    cout << i << " " << j << endl;
                    check = 1;
                    break;
                }
            }
            if (check)
            {
                break;
            }
        }
    }
    return 0;
}