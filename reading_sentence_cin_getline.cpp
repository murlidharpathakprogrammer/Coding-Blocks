#include<iostream>
using namespace std;

void readLine(char a[], int maxLength, char delim){
    int i=0;
    char ch = cin.get();
    while (ch!=delim)
    {
        a[i]=ch;
        i++;
        if (i==(maxLength-1))
        {
            break;

        }
        ch=cin.get();
        a[i]='\0';
        return;
    }
    


}

int main(){
    char a[1000];
    cin.getline(a,1000,'$');
    cout<<a<<endl;   
}