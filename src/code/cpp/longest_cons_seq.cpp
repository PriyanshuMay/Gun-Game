class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set s(nums.begin(), nums.end());
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (s.find(nums[i] - 1) == s.end())
            {
                int num = nums[i];
                int cnt = 1;
                while (s.find(num + 1) != s.end())
                {
                    num++;
                    cnt++;
                }

                ans = max(ans, cnt);
            }
        }
        return ans;
    }
};