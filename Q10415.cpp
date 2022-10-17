#include <bits/stdc++.h>
using namespace std;

int cnt[10];
string present;
unordered_map<char, string> dict{
    {'c', "0111001111"},
    {'d', "0111001110"},
    {'e', "0111001100"},
    {'f', "0111001000"},
    {'g', "0111000000"},
    {'a', "0110000000"},
    {'b', "0100000000"},
    {'C', "0010000000"},
    {'D', "1111001110"},
    {'E', "1111001100"},
    {'F', "1111001000"},
    {'G', "1111000000"},
    {'A', "1110000000"},
    {'B', "1100000000"}};

void init()
{
    fill(cnt, cnt + 10, 0);
    present.assign(10, '0');
}

void print()
{
    for (int i = 0; i < 10; ++i)
    {
        if (i)
            cout << ' ';
        cout << cnt[i];
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T >> ws;
    string str;
    while (T--)
    {
        init();
        getline(cin, str);
        for (auto &ch : str)
        {
            for (int i = 0; i < 10; ++i)
                cnt[i] += max(0, dict[ch][i] - present[i]);
            present = dict[ch];
        }
        print();
    }
}