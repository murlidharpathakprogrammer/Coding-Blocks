#include <iostream>
using namespace std;

void spiralPrint(int a[][1000], int m, int n){

    int sRow=0;
    int sCol=0;
    int eRow=m-1;
    int eCol=n-1;

    // Print it now
    while (sRow<=eRow && sCol<=eCol)
    {
        // Top Row
        for (int  i = sCol; i <= eCol; i++)
        {
            cout<<a[sRow][i]<<" ";
        }
        sRow++;

        // Right Col
        for (int i = sRow; i <= eRow; i++)
        {
            cout<<a[i][eCol]<<" ";
        }
        eCol--;

        // Bottom Row
        if(eRow>sRow)
        for (int i = eCol; i >= sCol; i--)
        {
            cout<<a[eRow][i]<<" ";
        }
        eRow--;

        // Left Col
        if(eCol>sCol)
        for (int i = eRow; i >= sRow; i--)
        {
            cout<<a[i][sCol]<<" ";
        }
        sCol++;
    }
    
}

int main()
{
    int a[1000][1000];
    int m, n;
    cin >> m >> n;

    int val = 1;
    for (int row = 0; row <= m-1; row++)
    {
        for (int col = 0; col <=n-1; col++)
        {
            a[row][col] = val;
            val++;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }

    spiralPrint(a,m,n);

    return 0;
}