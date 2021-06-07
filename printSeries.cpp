#include <iostream>
using namespace std;

int main()
{
    int N1, N2, n = 1,val;
    cin >> N1 >> N2;

    for (int i = 0; i < N1; )
    {
        val = 3*n+2;
        if (val%N2==0)
        {
            n++;
            continue;
        }
        else
        {
            cout<<val<<endl;
            i++;
            n++;
        }
        
        
    }
    

    return 0;
}