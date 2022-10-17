#include <iostream>
#include <iomanip>
using namespace std;

float h, m;

int main()
{
    while (scanf("%f:%f", &h, &m))
    {
        if (h == 0 && m == 0)
            break;
        float ans = h * 30 + m * 0.5 - m * 6;
        if (ans < 0)
            ans *= -1;
        if (ans > 180)
            ans = 360 - ans;
        cout << setprecision(3) << fixed << ans << endl;
    }

    return 0;
}