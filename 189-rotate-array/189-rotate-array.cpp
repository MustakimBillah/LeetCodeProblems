class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int l = nums.size();
        int rk = k%l;
        
        vector<int>v=nums;
            
        for(int i=0;i<l;i++){
            nums[(i+rk)%l]=v[i];
        }
        
    }
};