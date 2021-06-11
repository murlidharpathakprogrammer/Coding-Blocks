#include<iostream>
using namespace std;

void selection_sort(int a[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex=i;
        int j;
        for (j = i; j < n; j++)
        {
            if (a[j]<a[minIndex])
            {
                minIndex=j;
            }
            
        }
        swap(a[i],a[minIndex]);
    }
    
}

int main(){
    int n;

    // Input n (no of elements you want to enter)
    cin>>n;

    int a[n];

    // store elements in the array
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    // call sorting function to sort arrays
    selection_sort(a,n);

    // print sorted arrays
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";

    return 0;
}