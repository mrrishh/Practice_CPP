#include<iostream>
#include<string>
using namespace std;

void permutate(string s, int l, int r){
    if(l==r){
        cout<<s<<" ";
        return;
    }

    for(int i=l; i<=r;i++){
        swap(s[l],s[i]); //Swaping with other char
        permutate(s,l+1,r);
        swap(s[l],s[i]);
    }
}

int main(){
    string s = "ABC";
    int l=0;
    int r=s.length()-1;
    permutate(s,l,r);
}

