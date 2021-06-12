#include<iostream>
using namespace std;

int bubble_sort(int a[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
            
        }
        
    }
    return 0;
}

int main(){
    int n;
    // cout<<"Enter length of array: ";
    cin>>n;
    int a[n];
    // cout<<"Enter elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    bubble_sort(a,n);

    // print sorted array
    // cout<<"sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";

    return 0;
}