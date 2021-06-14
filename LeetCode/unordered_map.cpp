/* Hash Map Implementation in C++ */

#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    unordered_map<int,string> mp;
    
    //insert key,value pair to map;
    //one way is to make pair first and then insert;
    pair<int,string> p(1,"ABAC");
    mp.insert(p);

    //another way is to directly insert value for the key
    mp[2]="DEF";

    //find or accessing keys
    cout<<"Value at 1st key: "<<mp[1]<<endl; //If key exist it will return the value, 
                                            //If key not exist it will insert that key with default value 0

    cout<<"Value at 2nd key: "<<mp.at(2)<<endl;//If key exist it will return the value, 
                                            //If key not exist it will through an exception
    cout<<"Size of MP: "<<mp.size()<<endl;
    cout<<"New keyVal created and Value at 3rd key: "<<mp[3]<<endl; //This key isnt exit so it will creat key 3
    cout<<"Size of MP: "<<mp.size()<<endl;

    //Check Presense
    if(mp.count(1)>0){
        cout<<"Key is present"<<endl;
    }

    //erase key
    mp.erase(3);
    if(mp.count(3)>0){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }
    cout<<"Size of MP: "<<mp.size()<<endl;

    mp[5]="DEF";
    mp[6]="DEF1";
    mp[7]="DEF2";
    mp[8]="DEF3";
    mp[9]="DEF4";
    mp[10]="DEF5";
    //Iterators

    unordered_map<int,string>::iterator it = mp.begin();

    while(it!=mp.end()){
        cout<<"Key: "<<it->first<<"\t Value: "<<it->second<<endl;
        it++;
    }

    return 0;
}