#include <iostream>
using namespace std;

int main()
{
    int a[1000][1000];
    int m, n;
    cin >> m >> n;

    int val = 1;

    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            a[row][col] = val;
            val++;
            cout << a[row][col]<<" ";
        }
        cout << endl;
    }
    return 0;
}