class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int mid=0;
        
        while(low<=high){
            
            
            int mid = low + ((high-low)/2);
            
            if (low==high){
                if(nums[low]==target) return low;
                else if(nums[low]<target) return low + 1;
                else return low;
            }
            
            if(nums[mid]>target){
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                return mid;
            }
            
        }
            
         return low;   
    }
};