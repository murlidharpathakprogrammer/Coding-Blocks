#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int cs = 0;
    int ms = 0;
    int left = 0;
    int right = 0;
    int k;

    // store all elements of the array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cs += a[i];
        if (cs < 0)
        {
            cs = 0;
        }
        ms = max(cs, ms);
    }

    cout << ms << endl;
    return 0;
}