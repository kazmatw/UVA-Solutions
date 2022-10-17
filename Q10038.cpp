#include <iostream>
#include <algorithm>
using namespace std;

bool jolly(int n, int num[])
{
    int temp[3005], k = 0;
    for (int i = 0; i < n - 1; i++)
    {
        temp[i] = abs(num[i] - num[i + 1]);
        k++;
    }
    sort(temp, temp + k);
    for (int i = 0; i < n - 1; i++)
    {
        if (temp[i] != i + 1)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n = 0;
    while (cin >> n)
    {
        int k = n;
        int num[3005];
        int i = 0;
        while (k--)
        {
            cin >> num[i];
            i++;
        }
        if (jolly(n, num))
        {
            cout << "Jolly" << endl;
        }
        else
        {
            cout << "Not jolly" << endl;
        }
    }
    return 0;
}