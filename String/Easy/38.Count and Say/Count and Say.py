#傻瓜式方法
class Solution(object):
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """
        s = '1'
        for i in range(1,n):
            result = []
            while s:
                cout = {}
                s_len = len(s)
                for i in range(s_len):
                    if s[i] !=  s[0]:
                        index = i - 1
                        break
                    else:
                        index = s_len - 1
 
                cout[int(s[0])] = index + 1
                result.append(cout)
                s = s[index + 1:]
            s = ''
            for each in result:
                s += str(list(each.values())[0]) + str(list(each.keys())[0])
        return s

#与傻瓜方法一样，区别在于匹配使用正则表达式匹配
# r'(.)\1*'为后向引用
# 表示表达式中，\1表示，从左往右数，第一个左括号对应的括号内的内容。
# 以此类推，\2表示第二个，\0表示整个表达式
class Solution(object):
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """
        s = '1'
        for _ in range(n-1):
            s = re.sub(r'(.)\1*', lambda a: str(len(a.group(0))) + a.group(1), s)
        return s