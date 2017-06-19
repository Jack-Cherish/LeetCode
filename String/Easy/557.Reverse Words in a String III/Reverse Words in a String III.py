class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        result = ''
        input_str = s.split(' ')
        for each in input_str:
            result = result + each[::-1] + ' '
        return result[:-1]

        # return ' '.join(x[::-1] for x in s.split())

        # return ' '.join(s.split()[::-1])[::-1]