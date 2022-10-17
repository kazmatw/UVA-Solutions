// cin string 又掛了 getline 萬歲
#include <iostream>
#include <map>
using namespace std;

int main()
{
    string str_a, str_b;
    while (getline(cin, str_a), getline(cin, str_b))
    {
        map<char, int> a, b;
        for (int i = 0; i < str_a.length(); i++)
            a[str_a[i]]++;
        for (int i = 0; i < str_b.length(); i++)
            b[str_b[i]]++;
        for (auto i : a)
        {
            for (auto j : b)
            {
                if (i.first == j.first)
                {
                    int minNum = min(i.second, j.second);
                    while (minNum--)
                    {
                        cout << i.first;
                    }
                }
            }
        }
        cout << endl;
    }
}