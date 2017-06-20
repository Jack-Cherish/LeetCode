class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt = 0;
        for(char c: word) {
            if('Z' - c >= 0){
                cnt++;
            }
        }
        return ((cnt == 0 || cnt == word.length() || (cnt == 1 && 'Z' - word[0] >= 0)));
    }
};
