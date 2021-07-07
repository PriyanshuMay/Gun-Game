class Solution {
public:
    int myAtoi(string s) {
        int i=0, ans=0, n=s.length(), sign = 1;
        while(s[i]==' ') i++;
        if (s[i] == '-' or s[i] == '+')
        {
            sign = s[i] == '+' ? 1 : -1;
            i++;
        }
        while(isdigit(s[i]) && i<n){
            if(sign > 0){
                if(ans>INT_MAX/10 || (ans==INT_MAX/10 && s[i]-'0'>=7)){
                    return INT_MAX;
                }
            }else{
                if(ans>INT_MAX/10 || (ans==INT_MAX/10 && s[i]-'0'>=8)){
                    return INT_MIN;
                }
            }
            ans=ans*10+(s[i]-'0');
            i++;
        }
        ans *= sign;
        return ans;
    }
};