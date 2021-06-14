#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int cumSum[n+2]={0};
    int left = 0;
    int right = 0;
    int k;

    cin>>a[0];
    cumSum[0]=a[0];

    // store all elements of the array
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        cumSum[i]=cumSum[i-1]+a[i];
    }

    int mSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int cSum = 0;
            cSum = cumSum[j]-cumSum[i-1];
            if (cSum > mSum)
            {
                mSum = cSum;
                left = i;
                right = j;
            }

            // cout << "\n";
        }
    }

    for (int i = left; i <= right; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\n"
         << mSum << endl;
    return 0;
}