class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        
        if(nums[l]<nums[r]){
            int indx = binSearch(nums,l,r,target);
            return indx;
        }
        
        while(r-l>1){
            
            int mid = (l+r)/2;
            
            if(nums[l]>nums[mid]){
                r=mid;
            }
            else{
                l=mid;
            }
            
        }
        int res1 = binSearch(nums,0,l,target);
        int res2 = binSearch(nums,r,nums.size()-1,target);
        
        return max(res1,res2);
    }
    int binSearch(vector<int> nums,int l,int r,int target){
        
            while(l<=r){
            
            int mid = (l+r)/2;
            
            if(nums[mid]>target){
                r=mid-1;
            }
            else if(nums[mid]<target) {
                l=mid+1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};