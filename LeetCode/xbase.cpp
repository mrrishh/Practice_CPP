/*
Let Ai be the number of digits in the x-base representation of i . 
The x-base representation is the representation of a number in base .

Determine the summation for the provided n and x  
*/

#include<bits/stdc++.h>
using namespace std;

long long solve (int n, int k) {
   // Write your code here
    cout<<"\n K: "<<k;
    cout<<"\n small n: "<<n;
    if(n==0)
         return 0;
    int count=0,i=0;
    while(++i<=n){
        int N=i;
         cout<<"\n N :"<<N;
         for(int j=0;N>0;j++){
             int a=N%k;
             count++;
             N=N/k;
            }
        //i++;
        }
     //cout<<"\nCount: "<<count+1;
     return count+1;
}




int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        long long n;
        cin >> n;
        int k;
        cin >> k;

        long long out_;
        out_=solve(n, k);
        cout <<"\n SUM: "<< out_;
        cout << "\n";
    }
}