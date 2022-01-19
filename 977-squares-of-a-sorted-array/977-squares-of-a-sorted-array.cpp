class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        vector<int>res = nums;
        
        for(int i=r;i>=0;i--){
            if(abs(nums[l])>abs(nums[r])){
                res[i]=nums[l]*nums[l];
                l++;
            }
            else{
                 res[i] = nums[r] * nums[r];
                 r--;
            }
        }
        return res;
    }
};