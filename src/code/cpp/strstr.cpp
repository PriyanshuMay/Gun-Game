class Solution {
public:
    bool isEqual(string s, string n, int len, int start)
    {
        for(int i=start,j=0; j<len; i++,j++)
        if(s[i] != n[j])
            return false;
        return true;
    }
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        if (!m) return 0;
        if (m>n) return -1;
        for(int i=0; i<n-m+1; i++)
            if(isEqual(haystack, needle, m, i))
                return i;
        return -1;
    }
};