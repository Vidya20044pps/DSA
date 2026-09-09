class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>we(nums.size());
        vector<int>us(nums.size());
        vector<int>ans(nums.size());
        int sum =1;
        int n = nums.size();
        we[0] = 1;
       
        us[n-1] = 1;
        int pres = 1;
        for(int k=n-2;k>=0;k--){
            pres = pres*nums[k+1];
            us[k] =  pres;
        }
        for(int i = 1; i<n;i++){
            sum = sum* nums[i-1];
            we[i]= sum;
        }
        for(int j =0; j<n;j++){
            ans[j] = we[j]*us[j];
        }
        return ans;
        
    }
};