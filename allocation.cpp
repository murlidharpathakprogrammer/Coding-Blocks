#include<iostream>
using namespace std;

int main(){

    // Allocation + Deallocation = Compiler
    int b[100];
    cout<<sizeof(b)<<endl;
    cout<<b<<endl; //Symbol Table
    // here b can't be overwritten, b is a part of Read Only Memory

    // Dynamic Allocation (on the fly)
    int n;
    cin>>n;
    int * a = new int[n]{0};
    cout<<sizeof(a)<<endl;
    cout<<a<<endl; //Variable a that is created inside the static memory

    //No Change
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        cout<<a[i]<<" ";
    }
    
    // Freeup the space
    delete []a;

    return 0;
}