public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        
       if(n>=0) return oneCount(n);
       else{
           n= (n+1)*-1;
           return 32-oneCount(n);
       }   
    }
       
    int oneCount(int x){
        
        int cnt=0;
        
        while(x>0){
            if(x%2==1) cnt++;
            x=x/2;
        }  
        return cnt;
    }
}