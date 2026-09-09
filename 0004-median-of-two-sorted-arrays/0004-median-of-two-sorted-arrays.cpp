class Solution {
public:

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size()+nums2.size();
        float ans;
        vector<int>j;
        for(int i = 0;i<nums1.size();i++){
           j.push_back(nums1[i]); 
        }
        for(int i =0;i<nums2.size();i++){
            j.push_back(nums2[i]);
        }
        sort(j.begin(),j.end());
        if(n%2 == 0){
         ans = (j[n/2]+j[n/2-1])/2.0;
        }
        else
        ans = j[n/2];
        return ans;
    }
};