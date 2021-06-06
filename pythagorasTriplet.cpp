#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;
#define ll long long int

int main(){
    ll N;
    while(cin>>N){
	if(N<3){
		cout<<"-1";
		continue;
	}
    if (fmod(N,2)==0)
    {
        cout<<std::fixed<<std::setprecision(0) <<(N/2)*(N/2)-1<<" "<<(N/2)*(N/2)+1;
    }
    else{
        cout<<std::fixed<<std::setprecision(0) <<(N*N-1)/2<<" "<<((N+1)/2)*((N+1)/2)+((N-1)/2)*((N-1)/2);
    }
	}
    
    
    // cout<<std::fixed<<std::setprecision(0) << min<<" "<<max;

    return 0;
}