class Solution {
public:
    string reverseWords(string s) {
        vector<string> order;
        string ans = "";
        string word = "";
        int start=0, n = s.size();
        int end = n-1;
        while(s[start]==' ') start++;
        while(s[end]==' ') end--;
        while(start <= end)
        {
            if(s[start] == ' ')
            {
                if( word.size() > 0)
                {
                order.push_back(word);
                word.clear();
                }
            }
            else
            {
                word+=s[start];
            }
            start++;
        }
        if( word.size() > 0) order.push_back(word);
        for(int i=order.size()-1; i>0; i--)
            ans += order[i] + " ";
        ans += order[0];
        return ans;
    }
};