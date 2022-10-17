#include <iostream>
using namespace std;

bool isPrime(int p)
{
    if (p == 1)
    {
        return 0;
    }
    else if (p == 2)
    {
        return 1;
    }
    else
    {
        for (int i = 2; i < p; i++)
        {
            if (p % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

void print_ans(string s)
{
    int data[2005][2], tail = 0;
    bool check = 0, ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        check = 0;
        for (int j = 0; j < tail; j++)
        {
            if ((int)s[i] == data[j][0])
            {
                data[j][1]++;
                check = 1;
                break;
            }
        }
        if (!check)
        {
            data[tail][0] = (int)s[i];
            data[tail][1] = 1;
            tail++;
        }
    }
    for (int i = 1; i < tail; i++)
    {
        for (int j = 0; j < i; j++)
            if (data[i][0] < data[j][0])
            {
                swap(data[i][0], data[j][0]);
                swap(data[i][1], data[j][1]);
            }
    }

    for (int i = 0; i < tail; i++)
    {
        if (isPrime(data[i][1]))
        {
            ans = 1;
            cout << (char)data[i][0];
        }
    }
    if (!ans)
    {
        cout << "empty";
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        cout << "Case " << i + 1 << ": ";
        print_ans(s);
        cout << endl;
    }
    return 0;
}