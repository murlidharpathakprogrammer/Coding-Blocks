#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    for (int i = 1; i <= N; i++)
    {
        int flag=1;
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                flag = 0;
                break;
            }
            else{
                continue;
            }
        }
        if (flag==1)
        {
            cout<<i<<endl;
        }
        
    }
    return 0;
}