#include<iostream>
using namespace std;

int main(){
    int no;
    int sum=0;
    while(sum>=0){
        cin>>no;
        sum+=no;
        if(sum>=0){
            cout<<no;
            continue;
        }
        else{
            break;
        }
    }

    return 0;
}