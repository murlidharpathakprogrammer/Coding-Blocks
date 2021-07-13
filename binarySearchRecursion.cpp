#include<iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
  
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
  
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
  
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
  
    // We reach here when element is not
    // present in array
    return -1;
}

int main(){
    int arr[1000], x, n;
    cout<<"Enter length of array: ";
    cin>>n;
    cout<<"\nEnter elements: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the key (element you want to search for: ";
    cin>>x;
    int result = binarySearch(arr, 0, n - 1, x);
    (result==-1)? cout<<"Element Not Found"<<endl
                : cout<<"Element present at index "<<result<<endl;
    return 0;
}