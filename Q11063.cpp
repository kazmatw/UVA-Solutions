#include <iostream>
using namespace std;
int main()
{
    int b[1005] = {0}, n, t = 0, i, j;
    while (cin >> n)
    {
        int b2 = 0;
        for (i = 1; i <= n; i++)
        {
            cin >> b[i];
            if (b[i] <= b[i - 1])
                b2 = 1;
        }
        int note[20005] = {};
        if (b2 == 0)
            for (i = 1; i <= n; i++)
            {
                for (j = i; j <= n; j++)
                {
                    if (note[b[i] + b[j]] != 0)
                        b2 = 1;
                    note[b[i] + b[j]] = 1;
                }
            }
        cout << "Case #" << ++t << ": It is ";
        if (!b2)
            cout << "a B2-Sequence.\n\n";
        else
            cout << "not a B2-Sequence.\n\n";
    }
}
