// Note: focus on the question
#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a > b)
        {
            swap(a, b);
        }
        if (!(a & 1))
        {
            a += 1;
        }
        if (!(b & 1))
        {
            b -= 1;
        }
        cout << "Case " << i + 1 << ": ";
        cout << (b * b - a * a + 2 * (a + b)) / 4 << endl;
    }
    return 0;
}