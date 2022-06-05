class Solution {
    public double average(int[] salary) {
        
        double sum =0;
        int mn=10000000;
        int mx=-1;
        
        for(int Salary : salary){
            
            if(Salary<mn) mn=Salary;
            if(Salary>mx) mx=Salary;
            sum += Salary;
        }
        
        return (sum-mn-mx)/(salary.length -2);
        
    }
}