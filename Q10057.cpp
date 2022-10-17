#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define N 1000000

int arr[N];

int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        int mid = 0;
        int val = 0;
        int count = 0;

        if (n % 2 == 0)
        {
            mid = n / 2 - 1;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == arr[mid] || arr[i] == arr[mid + 1])
                    count++;
            }
            val = arr[mid + 1] - arr[mid] + 1;
        }
        else
        {
            mid = n / 2;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == arr[mid])
                    count++;
            }
            val = 1;
        }

        cout << arr[mid] << " " << count << " " << val << endl;
    }

    return 0;
}