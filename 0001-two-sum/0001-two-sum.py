# class Solution(object):
#     def twoSum(self, nums, target):
#         """
#         :type nums: List[int]
#         :type target: int
#         :rtype: List[int]
#         """
        

class Solution(object):
    def twoSum(self, nums, target):
        num_to_index = {}
        
        for i, num in enumerate(nums):
            complement = target - num
            if complement in num_to_index:
                return [num_to_index[complement], i]
            num_to_index[num] = i

        return None

nums = [2, 7, 11, 15]
target = 9
solution = Solution()
print(solution.twoSum(nums, target))  # Output: [0, 1]