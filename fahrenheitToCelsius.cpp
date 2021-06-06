#include <iostream>
using namespace std;

int main()
{
    int F, C, step;
    int fMin, fMax;
    cin >> fMin >> fMax >> step;
    F = fMin;
    while (F <= fMax)
    {
        cout << F << "  " << (5*(F - 32) / 9)<<endl;
        F += step;
    }

    return 0;
}