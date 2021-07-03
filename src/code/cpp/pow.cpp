class Solution {
public:  
    double exp(double x, int n){
        if(n==0) return (double)1;
        double y = exp(x,n/2);
        if(n&1)
        return y*y*x;     
        return y*y;        
    }
        
    double myPow(double x, int n) {
        if(n<0) return 1.0/exp(x,n);          
        return exp(x,n);
    }
};