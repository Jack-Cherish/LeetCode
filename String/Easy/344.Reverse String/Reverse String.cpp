class Solution {
public:
    string reverseString(string s) {
        int begin = 0, end = s.size() - 1;
        while(begin < end){
            swap(s[begin++], s[end--]);
        }
        return s;
    }
};