class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size(), ans = 0;
        for(auto &e:nums)
            {
            if(1+1 > n/2)
            {
                ans = e;
                break;
            }
            mp[e]++;
        }
        return ans;
    }
};