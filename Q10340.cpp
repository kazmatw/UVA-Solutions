#include <iostream>
using namespace std;

bool isSubstring(string s, string t)
{
    int point = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (s[point] == t[i])
        {
            point++;
        }
    }
    if (point == s.size())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    string s, t;
    while (cin >> s >> t)
    {
        if (isSubstring(s, t))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}