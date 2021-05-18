#include<iostream>
#include<string>
using namespace std;
int count=0;
int count_vowels(string *s1){
    
    int l= (*s1).length();
    cout<<"Length: "<<l;
    for(int i=0;i < l; i++ ){
        if((*s1)[i]=='a'||(*s1)[i]=='e'||(*s1)[i]=='i'||(*s1)[i]=='o'||(*s1)[i]=='u'){
            count++;
        }
    }
    return count;
}

int main(){
    string s="aaabbccdiii";
    count_vowels(&s);
    cout<<"\n Vowel Count: "<<count;
    return 0;
}