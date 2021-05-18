/*Implement next permutation, which rearranges numbers into the lexicographically 
next greater permutation of numbers.

If such an arrangement is not possible,
it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

The replacement must be in place and use only constant extra memory.*/

#include<iostream>
#include<vector>
#include<bits/stdc++.h> 
#include<algorithm>
using namespace std;
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return;
        
        int i=1;
        int lastInc = -1;
        while(i<n) {    //Find the peak of last ASC order
            if(nums[i]>nums[i-1])
                lastInc = i;
            i+=1;
        }
        
        if(lastInc==-1) {   //Check if array is DSC
            for(i=0;i<n/2;++i)
                swap(nums[i],nums[n-i-1]);
            return;
        }
        //Find element in the range (nums[lastInc-1] to nums[lastInc]) to the right
        int mn = nums[lastInc];
        int index = lastInc;
        for(i=lastInc;i<n;++i) {
            if(nums[i]>nums[lastInc-1] and nums[i]<nums[index]) {
                index = i;
            }
        }
        swap(nums[lastInc-1],nums[index]);
        sort(nums.begin()+lastInc,nums.end());
    }

  int main (){
       // vector<int> nums1 = {-1,0,1,2,-1,-4};
       // vector<int> nums1 = {1,2,3};
       // vector<int> nums1 = {3,2,1};
       // vector<int> nums1 = {1,1,5};
       // vector<int> nums1 = {1};
        vector<int> nums1 = {4,1,5,2,3};
        nextPermutation(nums1);
        // Displaying the 2D vector
        
        cout << "[";
        for (int i = 0; i < nums1.size(); i++) {   
            cout<< nums1[i]<< ",";
        }
             cout << "]";
             cout << endl;        
    }