
/// week01-2.cpp
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H=len(haystack)
        N=len(needle)
        for i in range(H-N+1):
            if haystack[i:i+N]==needle:
                return i ///成功找到
        return -1  ///沒有成功
