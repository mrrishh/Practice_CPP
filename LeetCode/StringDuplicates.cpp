#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
void printDuplicatesInString(string s){
    int n = s.length();
    int count = 0;
    unordered_map<char,int> keepCount;
    for(int i=0; i<n;i++){
        keepCount[s[i]]++;
    }

    unordered_map<char,int>::iterator it = keepCount.begin();
    while(it!=keepCount.end()){
        if(it->second > 1){
            cout<<"Duplicate: "<<it->first<<"\t Count: "<<it->second<<endl;
        }
        it++;
    }

}

int main(){
    string str = "test string test string a";
    printDuplicatesInString(str);
    return 0;
}