#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //sort(nums1.begin(), nums1.end());
        //sort(nums2.begin(), nums2.end());
        vector<int> nums3(nums1.size() + nums2.size());
        merge(nums1.begin(), nums1.end(),nums2.begin(), nums2.end(),nums3.begin());
        
        if(nums3.size() %2 !=0)
            return (double)nums3[nums3.size() / 2];
        
        return (double)(nums3[(nums3.size() - 1) / 2] + nums3[nums3.size() / 2]) / 2.0;
    }
};

int main(){
    Solution s;
    vector<int> n1={1,4};
    vector<int> n2={2,3};
    cout<<s.findMedianSortedArrays(n1,n2);
}