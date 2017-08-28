class Solution(object):
    def reverseStr(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        s_size = len(s)
        result = ''
        for i in range(0, s_size, 2*k):
            temp = s[i:min([i+2*k,s_size])]
            result += temp[k-1::-1] + temp[k:]
        return result