class Solution {
    func sortColors(_ nums: inout [Int]) {
        var low = 0
        var mid = 0
        var hi = nums.count - 1
        var temp = 0
        
        while mid <= hi {
        
            if nums[mid] == 0 {
                    temp = nums[low]
                    nums[low] = nums[mid]
                    nums[mid] = temp
                    low += 1
                    mid += 1
            } else if nums[mid] == 1 {
                    mid += 1
            } else {
                                    temp = nums[mid]
                    nums[mid] = nums[hi]
                    nums[hi] = temp
                    hi -= 1
            }
            
      }
    }
}
