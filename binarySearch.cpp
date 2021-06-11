#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int m = (s+e) / 2;

    while (m != s && m != e)
    {
        /* code */

        if (a[m] == key)
        {   
            cout<<"Element present at index "<<m;
            return m;
        }
        else if (a[m] > key)
        {
            e = m - 1;
            m = (s + e) / 2;
        }
        else
        {
            s = m + 1;
            m = (s + e) / 2;
        }
    }
    cout<<"Not found!\n";

    return 0;
}

int main()
{
    int n, key;
    int a[1000];
    cout << "Enter length of array: ";
    cin >> n;
    cout << "Enter elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the element you want to search: ";
    cin >> key;

binarySearch(a, n, key);

    return 0;
}