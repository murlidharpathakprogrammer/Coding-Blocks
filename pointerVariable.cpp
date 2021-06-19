#include<iostream>
using namespace std;

int main(){
    int x=10;
    int y=20;
    int* xptr;
    xptr = &x;

    cout<<&x<<endl;
    cout<<xptr<<endl;

    // Reassign 
    xptr = &y;
    cout<<xptr<<endl;

 return 0;   
}