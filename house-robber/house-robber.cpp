class Solution {
public:
    int rob(vector<int>& nums) {
        
        return dp(nums,nums.size()-1);
    }
    
    map<int,int>mp;
    
    int dp(vector<int>& nums,int i){
        
        if(i==0) return nums[i];
        else if(i==1) return max(nums[i-1],nums[i]);
        
        if(mp.count(i)<1){
            mp[i]= max(dp(nums,i-1),dp(nums,i-2)+nums[i]);
        }
        
        return mp[i];
    }

};