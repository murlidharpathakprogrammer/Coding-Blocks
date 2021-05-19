#include <iostream>
using namespace std;

int main()
{
    int row;
    cin >> row;
    for (int col=1; col <= row; col++)
    {
        /* code */

        int val = col;
        for (val; val < 2 * col - 1; val++)
        {
            cout << val;
        }

        for (val; val >= col; val--)
        {
            cout << val;
        }

        cout << "\n";

    }
    return 0;
}