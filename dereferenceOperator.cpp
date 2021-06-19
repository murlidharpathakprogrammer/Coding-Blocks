#include<iostream>
using namespace std;

int main(){
    int x=10;
    int * xptr = &x;
    cout<<&x<<endl; // address of x
    cout<<xptr<<endl; //address of x

    cout<<*(&x)<<endl;  //10
    cout<<*xptr<<endl;  //10

    cout<<*(&xptr)<<endl; // address of x
    cout<<&(*xptr)<<endl; // address of x

    return 0;
}