class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        freq = {}
        for val in nums:
            freq[val] = freq.get(val, 0) +1

        for key, value in freq.items():
            if value > 1:
                return True
        return False
        