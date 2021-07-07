class Solution:
    def myAtoi(self, s: str) -> int:
        sign = 1
        start = 0
        ans = 0
        limit = 1 << 31
        s = s.strip(" ").split(" ")[0]
        size = len(s)
        if size == 0 : return 0
        if s[0] == '-':
            start = 1
            sign = -1
        if s[0] == '+':
            start = 1
        for i in range(start, size):
            if(s[i].isalpha() or s[i] =='.' or s[i] == '-' or s[i] == '+'): break
            ans = ans*10 + int(s[i])
        ans *= sign
        if ans > limit - 1:
            ans = limit - 1
        if ans < -(limit - 1):
            ans = -(limit - 1) -1
        return ans