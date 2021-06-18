#include<iostream>
using namespace std;

int main(){
    int a[1000][1000]={0};
    int m,n;
    cin>>m>>n;
    int val = 1;

    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            a[row][col]=val;
            val++;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    
    // Wave Print
    for (int col = 0; col < n; col++)
    {
        if (col%2==0)
        {   //Even Col - Top Down
            for (int row=0; row <m; row++)
            {
                cout<<a[row][col]<<" ";
            }  
        }
        else
        {   //Bottom Up Direction
            for (int row=m-1; row >= 0; row--)
            {
                cout<<a[row][col]<<" ";
            }
            
        }
        
        
    }
    

    return 0;
}