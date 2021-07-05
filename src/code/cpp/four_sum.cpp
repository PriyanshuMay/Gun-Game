class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        map<vector<int>, int> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    for (int l = k + 1; l < n; l++)
                        if (nums[i] + nums[j] + nums[k] + nums[l] == target)
                            mp[{nums[i], nums[j], nums[k], nums[l]}]++;
                }
            }
        }
        for (auto &e : mp)
            ans.push_back(e.first);
        return ans;
    }
};