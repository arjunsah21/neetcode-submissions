class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        res = []
        for i in range(len(nums)):
            pro = 1
            for j in range(len(nums)):
                if i == j:
                    continue
                
                pro *= nums[j]

            res.append(pro)

        return res

        