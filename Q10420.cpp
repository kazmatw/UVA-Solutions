#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    string str;
    map<string, int> mp;
    cin >> n; 
    while (n--)
    {
        cin >> str;
        mp[str]++;
        getline(cin, str);
    }
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
}