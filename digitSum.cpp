#include<iostream>
using namespace std;

int main(){
	int N, F, sum=0;
	cout<<"Enter N: ";
	cin>>N;
	F=N;
	while(F>=1){
		sum+=F%10;
		F=F/10;
	}
	cout<<"Sum of digits  of "<<N<<" is "<<sum<<endl;
	return 0;
}
