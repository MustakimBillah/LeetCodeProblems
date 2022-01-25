class Solution {
public:
     map<int,int>mp;
    int tribonacci(int n) {
        
        if(n==0 || n==1) return n;
        else if(n==2) return 1;
        
        if(mp.count(n)<1) mp[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        
        return mp[n];
    }
};