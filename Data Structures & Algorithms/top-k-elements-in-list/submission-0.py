from typing import List
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = {}
        for num in nums:
            freq[num] = freq.get(num, 0) + 1

        sorted_freq = sorted(freq.items(), key=lambda item: item[1], reverse=True)
        res = []
        res = [key for key, _ in sorted_freq[:k]]
        return res