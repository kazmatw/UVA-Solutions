#include <iostream>
#include <sstream>
using namespace std;

int F(int n)
{
    stringstream ss;
    string str;
    ss << n;
    ss >> str;
    int sum = 0;
    for (int i = 0; i < str.length(); i++)
    {
        sum += str[i] - '0';
    }
    if (sum < 10)
        return sum;
    else
        return F(sum);
}

int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        cout << F(n) << endl;
    }
}
