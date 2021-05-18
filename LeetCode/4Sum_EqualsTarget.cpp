/*Given an array nums of n integers, return an array 
of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> v;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0; i<n;i++){
            if(i==0 || nums[i]!=nums[i-1]){
                for(int j=i+1;j<n;j++){
                    if(j==i+1 || nums[j]!=nums[j-1]){
                        int k = j+1, l=n-1;
                        
                        while(k<l){
                            int sum = nums[i] + nums[j] + nums[k] + nums[l];
                            if(target - sum ==0){
                                v.push_back({nums[i] ,nums[j] , nums[k] , nums[l]});
                                k++;
                                while(k < l && nums[k] == nums[k - 1]) k++;    
                            }
                            else if(sum< target) k++;
                            else l--;
                        }
                    }
                }
            }
        }
     return v;  
    }

    int main (){
        vector<int> nums1 = {-1,0,1,2,-1,-4};
        vector<vector<int>> vec = fourSum(nums1,-4);
        // Displaying the 2D vector
        
        for (int i = 0; i < vec.size(); i++) {
            cout << "[";
            for (int j = 0; j < vec[i].size(); j++){
             cout<< vec[i][j] << ",";
            }
             cout << "]";
             cout << endl;
            
        }
    }

