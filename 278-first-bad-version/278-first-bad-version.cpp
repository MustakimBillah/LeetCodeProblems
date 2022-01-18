// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
#include <bits/stdc++.h>
class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        int mid = 0;
        int ans =0;
        while(low<=high){
            
            mid = low + floor((high-low)/2);
            
            bool res = isBadVersion(mid);
            
            if(res==true){
                high=mid-1;
                ans=mid;
            }
            else if(res==false){
                low=mid+1;
            }
        }
        return ans;
    }
};