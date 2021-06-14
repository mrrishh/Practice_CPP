#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

bool validShuffle(string s1, string s2,string s3){
    int n1=s1.size();
    int n2=s2.size();
    string res = s1 + s2;
    int n3=res.size();
    cout<<"RES: "<<res<<" SIZE: "<<n3<<endl;
    
    unordered_map<char,int> map;
    unordered_map<char,int> map1;
    for(int i=0; i<n3;i++){
        map[res[i]]++;
        map1[s3[i]]++;
    }

    

    unordered_map<char,int>::iterator it = map.begin();
    unordered_map<char,int>::iterator it2 = map1.begin();
    int flag=0;
    while(it!=map.end()&& it2!=map1.end()){
        if(it->second == it2->second){
            cout<<"MAP1_VAL: "<<it->second<<"\tMAP2_VAL: "<<it2->second<<endl;
            flag=1;
        }
        else{
            return false;
        }
        it++;
        it2++;
    }

    if(flag==1) return true;

}

int main(){
    if(validShuffle("ab","bc","bbac"))
        cout<<"Valid Shuffle";
    else
        cout<<"Not Valid";
    return 0;
}