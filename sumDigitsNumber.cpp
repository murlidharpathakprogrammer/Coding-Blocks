#include<iostream>
using namespace std;

int main(){
    int sum=0, N;
    cin>>N;
    while (N>=1)
    {
        sum+=N%10;
        N=N/10;
    }
    cout<<sum;
    return 0;
}