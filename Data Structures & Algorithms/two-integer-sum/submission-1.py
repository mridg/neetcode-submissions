class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            for j in range(len(nums) - 1, 0, -1):
                if i == j:
                    break
                if nums[i] + nums[j] == target:
                    return [i, j]
        return [0]