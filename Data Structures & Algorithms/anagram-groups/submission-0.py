class Solution:
    def checkAnagram(self, s1: str, s2: str) -> bool:
        if len(s1) != len(s2):
            return False
        freq = {}
        for c in s1:
            freq[c] = freq.get(c, 0) + 1

        for c in s2:
            if c not in freq:
                return False
            freq[c] -= 1
            if freq[c] < 0:
                return False
        return True

    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = []
        n = len(strs)
        visited = [False]*n
        
        for i in range(n):
            if visited[i]:
                continue
            group = [strs[i]]
            visited[i] = True

            for j in range(i+1, n):
                if self.checkAnagram(strs[i], strs[j]):
                    group.append(strs[j])
                    visited[j] = True
            res.append(group)
        return res


        