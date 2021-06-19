#include<iostream>
using namespace std;

int main(){
    int x=10;
    cout<<&x<<endl;
    
    float y = 10.5;
    cout<<&y<<endl;

    // it does not work for character variables
    char ch = 'A';
    // Explicit Typecasting from char* to void*, it can also be converted to int* and it will work
    cout<<(void *)&ch<<endl;

    return 0;
}