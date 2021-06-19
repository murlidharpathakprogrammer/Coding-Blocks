#include<iostream>
using namespace std;

void incrementByValue(int a){
    a++;
    cout<<"Inside Function by value: "<<a<<endl;
}

void incrementByReference(int *bptr){
    *bptr =*bptr+1;
    cout<<"Inside Function by reference: "<<*bptr<<endl;

}

int main(){
    int a =10;
    incrementByValue(a);
    cout<<"Inside Main by value: "<<a<<endl;

    cout<<endl;

    int b=20;
    incrementByReference(&b);
    cout<<"Inside Main by reference : "<<b<<endl;
}