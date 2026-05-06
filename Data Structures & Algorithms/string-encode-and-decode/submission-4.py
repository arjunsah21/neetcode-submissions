class Solution:

    def encode(self, strs: List[str]) -> str:
        if not strs:
            return "empty"
        str_join = "!@#~".join(strs)
        return str_join

    def decode(self, s: str) -> List[str]:
        if s is "empty":
            return []
        decoded_list = s.split("!@#~")
        return decoded_list
