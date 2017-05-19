class Solution {
public:
    string addBinary(string a, string b) {
        string s = "";
        //i字符串a的索引值,j字符串b的索引值
        int c = 0, i = a.size() - 1, j = b.size() - 1;
        //字符串a和b没有遍历完，或者存在进位，继续计算
        while(i >= 0 || j >= 0 || c == 1)
        {
            //三目运算符：低位相加
            c += i >= 0 ? a[i--] - '0' : 0;
            c += j >= 0 ? b[j--] - '0' : 0;
            //结果
            s = char(c % 2 + '0') + s;
            //进位计算
            c /= 2;
        }
        //返回结果
        return s;
    }
};