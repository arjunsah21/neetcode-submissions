class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map = {}
        map[nums[0]] = 0
        for idx, num in enumerate(nums[1:]):
            need = target - num
            if need in map:
                return [map[need], idx+1]
            map[num] = idx+1
        