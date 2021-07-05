/*You are working for a company which has their stock price listed on New York Stock Exchange. 
The stock price keeps on changing each minute and we need to determine if two stock prizes 
in a given time window add upto a pre-determined value or not. 
Please refer to sample example below:

window size: 5
stock prizes: {8, 7, 6, 11}
pre-determined value: 14

Write a function which would take inputs as above parameters and return true 
if they add up to a pre-determined value else return false.
*/

/*
Solution :-
Comparing the sum of two stocks with pre-determined(target) value for the first window size
(if array size is less than window size take that min size). If matches return true.

if the array size is greater than window size then we have to slide the window for next elements,
i.e Acquiring the +1 index and releasing the ith - window_size index 
and again comparing the sum of two stocks with pre-determined(target) value for next windows.

if no such value found return false.
*/

#include<iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h> 
using namespace std;


bool solve(vector<int> stocks, int window_size, int target){
    int total_stocks = stocks.size();
    map<int, int> mp;
    int idx = 0;
    while (idx < min(window_size, total_stocks)){
        int num=stocks[idx];
        int complement=target-num;
        auto it=mp.find(complement);
        if(it!=mp.end()){
            return true;
        }
        mp[num]=idx;
        idx+=1;
    }
    while(idx < total_stocks){
        mp[stocks[idx-window_size]] -= 1;
        int num=stocks[idx];
        int complement=target-num;
        auto it=mp.find(complement);
        if(it!=mp.end()){
            return true;
        }
        mp[stocks[idx]] += 1;
        idx += 1;
    }    
    return false;

} 

int main (){
    vector<int> St = {8,7,6,11};
    cout<<solve(St, 5, 14);
return 0;
}
