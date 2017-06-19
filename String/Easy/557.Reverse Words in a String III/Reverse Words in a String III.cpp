class Solution {
public:
    string reverseWords(string s) {
        int front = 0;                  //记录空格后第一个字符的位置
        int str_length = s.length();    //字符串长度
        for(int i = 0; i <= str_length; i++) {
            if(i == s.length() || s[i] == ' ') {    //找到空格反转，没有空格整个字符串反转
                reverse(&s[front], &s[i]);
                front = i + 1;         
            }
        }
        return s;
    }
};