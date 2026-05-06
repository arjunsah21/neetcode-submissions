class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        freq_s = {}

        for char in s:
            freq_s[char] = freq_s.get(char, 0) + 1
        
        for char in t:
            freq_s[char] = freq_s.get(char, 0) - 1

        for key, value in freq_s.items():
            if value != 0:
                return False
        
        return True