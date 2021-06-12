#include<iostream>
#include<algorithm> // sort function is included in this header file
using namespace std;

// compare function to be passed as parameter to the sort functio
bool compare(int a, int b){
    return a>b;
}

int main(){
    int n;
    cin>>n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n, compare); //function name 'compare' as a parameter to sort function and this function is called internally as sort(){if(a[i]>a[i+1]){do this}}
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    

    return 0;
}