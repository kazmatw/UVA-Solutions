#include <iostream>
using namespace std;

int main()
{
    int n, f;
    cin >> n;
    while (n--)
    {
        cin >> f;
        int sum = 0, a, b, c;
        while (f--)
        {
            cin >> a >> b >> c;
            sum += a * c;
        }
        cout << sum << endl;
    }
    return 0;
}