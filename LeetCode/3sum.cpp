#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    vector<vector<int>> threeSum(vector<int>& nums) {
        //vector<vector<int>> result;
        vector<vector<int> > vec;
        sort(nums.begin(),nums.end());
        int l = nums.size();
        if(l<3) return {};
        for(int i =0; i<l; i++){
            if(i==0 || nums[i]!=nums[i-1]){
                int j=i+1, k=l-1;
                while(j<k){
                    if(k<l-1 && nums[k]==nums[k+1]){
                        k--;
                        continue;
                    }
                    if(nums[i]+nums[j]+nums[k] > 0){
                        k--;
                    } else if(nums[i]+nums[j]+nums[k] < 0){
                        j++;
                    }else{
                        vec.push_back({nums[i],nums[j],nums[k]});
                        j++;
                        k--;
                    }
                }
            }
            
        }
        return vec;
    }

    int main (){
        vector<int> nums1 = {-1,0,1,2,-1,-4};
        vector<vector<int>> vec = threeSum(nums1);
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

