class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>v;
        
        
        int l=0;
        int r=numbers.size()-1;
        int sum=0;
        
        while(l<r){
            sum = numbers[l]+numbers[r];
            if(sum==target){
                v.push_back(l+1);
                v.push_back(r+1);
                return v;
            }
            else if(sum<target) l++;
            else r--;
        }
        return v;
    }
};