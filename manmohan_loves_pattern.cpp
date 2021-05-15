#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if (!(i % 2 == 0))
        {
            for (int j = 0; j < i; j++)
            {
                cout << "1";
            }
            cout << "\n";
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || j == i)
                {
                    cout << "1";
                }
                else
                {
                    cout << "0";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}