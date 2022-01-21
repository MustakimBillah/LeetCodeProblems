class Solution {
public:
    string reverseWords(string s) {
      
        int l = s.size();
        int i,j,left,right;
        
        for(i=0,j=0;i<l;i++){
            
            if(s[i]==' '){
                
                left=j;
                right=i-1;
                
                while(left<right)
                {
                    char c = s[left];
                    s[left]=s[right];
                    s[right]=c;
                    left++;
                    right--;
                }
                j=i+1;
            }
        }
                left=j;
                right=l-1;
                
                while(left<right)
                {
                    char c = s[left];
                    s[left]=s[right];
                    s[right]=c;
                    left++;
                    right--;
                }
        return s;
    }
};