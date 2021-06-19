#include<iostream>
using namespace std;

void increment(int a){
    a++;
    cout<<"Inside Function "<<a<<endl;
}

void decrement(int *b){
    *b =*b+1;
    cout<<"Inside Function "<<b<<endl;

}

int main(){
    int a =10;
    increment(a);
    cout<<"Inside Main : "<<a<<endl;

    cout<<endl;

    int b=20;
    decrement(&b);
    cout<<"Inside Main : "<<b<<endl;
}