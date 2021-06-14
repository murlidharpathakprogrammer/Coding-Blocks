#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            if (a[i]+a[j]==k)
            {
                cout<<a[i]<<","<<a[j]<<"\n";
            }
            
        }
        
    }
    
    return 0;
}