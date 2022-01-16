class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0) return false;
        
        vector<int>v;
        
        int n=x;
        
        while(n){
            
            v.push_back(n%10);
            n=n/10;
        }
        
        int len=v.size();        
        int mid;
        
        if (len%2==0) mid = len/2;
        else mid=len/2 + 1;
        
        for(int i=0;i<mid;i++){
            if(v[i]==v[len-i-1]) continue;
            return false;
        }
        
        return true;
    }
};