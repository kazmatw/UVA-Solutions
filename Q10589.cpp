#include <iostream>
#include <iomanip>
using namespace std;

bool inAREA(double x, double y, double a)
{
    if (x > a / 2 && y > a / 2)
    {
        if ((x * x + y * y) > a * a)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if (x < a / 2 && y > a / 2)
    {
        if (((x - a) * (x - a) + y * y) > a * a)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else if (x > a / 2 && y < a / 2)
    {
        if ((x * x + (y - a) * (y - a)) > a * a)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        if (((x - a) * (x - a) + (y - a) * (y - a)) > a * a)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int main()
{
    double n, a;
    while (cin >> n >> a)
    {
        if (n == 0)
        {
            break;
        }
        double m = 0;
        for (int i = 0; i < n; i++)
        {
            double x, y;
            cin >> x >> y;
            if (inAREA(x, y, a))
            {
                m++;
            }
        }
        cout << setprecision(5) << fixed << m / n * a * a << endl;
    }
    return 0;
}