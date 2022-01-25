class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);
        return dp(cost,cost.size()-1);
    }
    
    map<int,int>mp;
    
    int dp(vector<int>& cost, int n){
        
        if(n==0) return cost[n];
        else if(n==1) return cost[n];
        
        if(mp.count(n)<1){
            mp[n]=cost[n]+min(dp(cost,n-1),dp(cost,n-2));
        }
        return mp[n];
    }
};