#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int left = 0;
    int right = 0;
    int k;

    // store all elements of the array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int cSum = 0;
            for (k = i; k <= j; k++)
            {
                // cout << a[k] << " ";
                cSum += a[k];
            }
            if (cSum > mSum)
            {
                mSum = cSum;
                left = i;
                right = k;
            }

            // cout << "\n";
        }
    }

    for (int i = left; i < right; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\n"
         << mSum << endl;
    return 0;
}