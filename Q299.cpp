#include <iostream>
using namespace std;

int main()
{
    int testCase_num, trainLength;
    int tmpTime, swapTimes;

    cin >> testCase_num;
    for (int i = 0; i < testCase_num; i++)
    {
        swapTimes = 0;
        tmpTime = -1;

        cin >> trainLength;
        int carriage[trainLength];
        for (int j = 0; j < trainLength; j++)
        {
            cin >> carriage[j];
        }

        // bubblesort
        while (tmpTime != 0)
        {
            tmpTime = 0;
            for (int k = 1; k < trainLength; k++)
            {
                if (carriage[k - 1] > carriage[k])
                {
                    int tmp = carriage[k - 1];
                    carriage[k - 1] = carriage[k];
                    carriage[k] = tmp;

                    tmpTime++;
                }
            }
            swapTimes += tmpTime;
            trainLength--;
        }
        cout << "Optimal train swapping takes " << swapTimes << " swaps." << endl;
    }
    return 0;
}