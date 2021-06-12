#include<iostream>
using namespace std;

bool compare(int a, int b){
    return a>b;
}

int bubble_sort(int a[], int n, bool (&cmp)(int a, int b)){
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 0; j <= n-i-1; j++)
        {
            if (cmp(a[j],a[j+1]))
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

    bubble_sort(a,n,compare);

    // print sorted array
    // cout<<"sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";

    return 0;
}