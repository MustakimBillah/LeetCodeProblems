class Solution {
    public int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        int res=0;
        
        while(n>0){
            res=n%10;
            sum+=res;
            prod*=res;
            n/=10;
        }
        
        return prod-sum;
    }
}