class Solution {
public:
    
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp; 
    vector<int> res;
    for(auto nums_it = nums.begin(); nums_it != nums.end(); ++nums_it){ 
        if(mp.find(target - *nums_it) != mp.end()){ 
            res.push_back(mp[target - *nums_it]);
            res.push_back(nums_it - nums.begin()); 
            break;
        }
        mp[*nums_it] = nums_it - nums.begin(); 
    }    
    return res;
}
};