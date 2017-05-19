class Solution {
public:
    //去掉字符串两端的空格
    string& trim(string &s) {
    	if (s.empty()) {
    		return s;
    	}
    	s.erase(0, s.find_first_not_of(" "));
    	s.erase(s.find_last_not_of(" ") + 1);
    	return s;
    }
    
    int countSegments(string s) {
        //字符串为空，返回0
        if (trim(s).empty()) {
            return 0;
        }
        int ans = 1;
        s = trim(s);   
        for (int i = 0; i < s.length(); i++) {
            //当前字符和下一个字符都不为空格，则为一个字段
            if (s[i-1] == ' ' && s[i] != ' ') {
                ans++;
            }
        }
        return ans;
    }
};