#include <iostream>
#include <algorithm>
using namespace std;

bool check_ans(long long &num)
{
    string str = to_string(num);
    reverse(str.begin(), str.end());
    num += stol(str);
    string str1 = to_string(num);
    string str2 = to_string(num);
    reverse(str2.begin(), str2.end());

    if (str1 == str2)
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
    int n;
    cin >> n;
    while (n--)
    {
        long long num;
        cin >> num;
        int count = 1;
        while (!check_ans(num))
        {
            count++;
        }
        cout << count << " " << num << endl;
    }
    return 0;
}