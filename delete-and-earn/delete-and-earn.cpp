class Solution {
public:
    
     map<int,int>mp;
     map<int,int>pm;
    
    int deleteAndEarn(vector<int>& nums) {
       
        int len=nums.size();
        
        for(int i=0;i<len;i++){
            mp[nums[i]]+=nums[i];
        }
        
        return dp(mp.rbegin()->first);
    }
    
    int dp(int n){
        
        if(n<=0) return 0;
        
        if(pm.count(n)<1) pm[n]=max(dp(n-1),mp[n]+dp(n-2));
        
        return pm[n];
        
    }
};