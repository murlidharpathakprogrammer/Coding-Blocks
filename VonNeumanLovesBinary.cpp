#include<iostream>
using namespace std;

int power(int a, int b);

int main(){
    int N;
    cin>>N;
    int binaryNos[N], binaryDup[N];

    // Input all N binary numbers
    int z=0;
    while(z<N){
        cin>>binaryNos[z];
        z++;
    }

    // Loop all binary numbers
    z=0;
    while (z<N)
    {
        binaryDup[z]=binaryNos[z];
        int last_digit, sum=0, c=0;
        while (binaryDup[z]>=1)
        {
            last_digit=binaryDup[z]%10;
            sum+=last_digit*power(2, c);
            binaryDup[z]/=10;
            c++;
        }
        // cout<<"Decimal of "<<binaryNos[z]<<" is ";
        cout<<sum<<endl;
        // cout<<power(2,3);
        z++;
    }
    


    return 0;
}

    int power(int a, int b){
        int interPow=1;
        for (int i = 1; i <= b; i++)
        {
            interPow*=a;
        }
        return interPow;
    }