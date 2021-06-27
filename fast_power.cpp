#include<iostream>
using namespace std;

// complexity N
int power(int a, int b){
    if(b==0){
        return 1;
    }
    else{
        return a*power(a,b-1);
    }
}

// complexity Log(N) at base2
int fast_power(int a, int b){
    if (b==0)
    {
        return 1;
    }
    // recursive case
    int small_ans = fast_power(a, b/2)*fast_power(a, b/2);
    if(b&1){
        return small_ans*a;
    }
    return small_ans;
}

int main(){
    int a,n;
    cin>>a;
    cin>>n;
    int ans_pow = power(a, n);
    int ans_fast_pow = fast_power(a, n); 
    cout<<ans_pow<<endl;
    cout<<ans_fast_pow<<endl;
    return 0;
}