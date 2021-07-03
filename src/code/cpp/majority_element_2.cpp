class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         map<int,int> mp;
        int n = nums.size();
        vector<int> ans;
        for(auto &e:nums)
            mp[e]++;
        for(auto &it:mp)
            if (it.second > n/3)
                ans.push_back(it.first);
        return ans;
    }
};