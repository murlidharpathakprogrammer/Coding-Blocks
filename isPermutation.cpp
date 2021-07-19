#include<iostream>
#include<cstring>
using namespace std;

bool isPermutauion(char *s1, char *s2){
    int l1 = strlen(s1);
    int l2 = strlen(s2);

    if(l1!=l2){
        cout<<"No, These are not permute"<<endl;
        return false;
    }

    // check for frequency otherwise!
    int frequency[26] = {0};    // Assuming char from A - Z

    // Iterate over s1
    for(int i=0; i<l1; i++){
        frequency[s1[i]-'a']++;
    }

    // Iterate over s2
    for(int i=0; i<l2; i++){
        frequency[s2[i]-'a']--;
    }

    // Finally check if all freuencies are zero
    for (int i = 0; i < 26; i++)
    {
        if (frequency[i]!=0)
        {
            cout<<"No, These are not permute"<<endl;
            return false;
        }
        
    }
    cout<<"Yes, These are permute"<<endl;
    return true;
}

int main(){
    char s1[100], s2[100];
    cin>>s1>>s2;

    isPermutauion(s1,s2);

    return 0;
}