#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>

using namespace std;
    int threeSumClosest(vector<int>& nums, int target) {
        int diff = INT_MAX; 
        sort(nums.begin(),nums.end());
        int l = nums.size();
        int sum =0;
        if(l<3) return {};
        for(int i =0; i<l; i++){
                int j=i+1, k=l-1;
                while(j<k){
                   sum = nums[i]+nums[j]+nums[k];
                    if(abs(target-sum)<abs(diff))
                        diff=target-sum;
                    if(sum<target)
                        ++j;
                    else
                        --k;
                }
        }
    return target - diff;
    }

    int main (){
        vector<int> nums1 = {-1,2,1,-4};
        int summation = threeSumClosest(nums1,1);
        cout<<"Closest: "<<summation;
            
        }
    
