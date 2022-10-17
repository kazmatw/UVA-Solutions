#include <iostream>
using namespace std;

int func(string s, int count) // return degree
{
    int total = 0;
    for (int i = 0; i < s.length(); i++)
    {
        total += s[i] - '0';
    }
    count++;
    if (total == 9)
    {
        return count;
    }
    else if (total < 9)
    {
        return 0;
    }
    else
    {
        return func(to_string(total), count);
    }
}
int main()
{
    int ans;
    string s;
    while (cin >> s && s != "0")
    {
        ans = func(s, 0);
        if (ans == 0)
        {
            cout << s << " is not a multiple of 9.\n";
        }
        else
        {
            cout << s << " is a multiple of 9 and has 9-degree " << ans << ".\n";
        }
    }
}