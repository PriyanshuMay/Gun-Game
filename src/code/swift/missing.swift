class Solution {
    func missingNumber(_ nums: [Int]) -> Int {
        var i = 0
        var actualSum = nums.count*(nums.count + 1)/2
        while i < nums.count {
            actualSum -= nums[i]
            i += 1
        }
        
        return actualSum
    }
}
