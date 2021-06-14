#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
bool checkRotationOfString(string s1,string s2){
    if (s1.length() != s2.length()) return false;
    for(int i=0;i<s1.length();i++){
        if(s1[i]==s2[s1.length()-i-1]){
            continue;
        }
        else{
            return false;
        }
    } 
    return true;
}

int main(){
    if(checkRotationOfString("abcd","dcba"))
        {cout<<"S2 is Rotation of S1";}
    else{
        cout<<"S2 is not Rotation of S1";
    }

    return 0;
}