#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    for (int i = 1; i <= N; i++)    //loop all N rows
    {
        int j=i;
        for (j = 0; j < (N-i); j++)
        {
            cout<<" ";
        }

        for (j=i; j < 2*i-1; j++)
        {
            cout<<j;
        }
        for (j; j >= i; j--)
        {
            cout<<j;
        }
        
        
        cout<<"\n";
    }
    
    return 0;
}
