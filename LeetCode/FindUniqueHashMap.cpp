#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

vector<int> removeDuplicates(int* a, int size){
    vector<int> res;
    unordered_map<int, bool> seen;
    for(int i=0; i<size;i++){
        if(seen.count(a[i])>0)
            continue;
        seen[a[i]]=true;
        res.push_back(a[i]);
    }
    return res;
}

int main(){
    int a[] = {2,4,4,5,5,2,4,3,6,4,15,43,6,1,2,4,9};
    vector<int> vec = removeDuplicates(a,17);

    for(int i=0; i<vec.size();i++){
        cout<<vec[i]<<endl;
    }

    //Accessign elements through vector iterator

    vector<int>::iterator it = vec.begin();
    while (it!=vec.end())
    {
        /* code */
        cout<<"Value: "<<*it<<endl;
        it++;
    }
    
    return 0;
}