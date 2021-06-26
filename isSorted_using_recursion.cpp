#include<iostream>
using namespace std;

bool isSorted(int *a, int n){
    // Base Case
    if (n==1)
    {
        return 1;
    }

    // Recursive Case
    if (a[0]<a[1] and isSorted(a+1, n-1))
    {
        return true;
    }

    return false;
}

int main(){
    int arr[]={1,5,9,18,24};    
    int n = sizeof(arr)/sizeof(int);
    cout<<boolalpha<<isSorted(arr, n)<<endl;

    return 0;
}