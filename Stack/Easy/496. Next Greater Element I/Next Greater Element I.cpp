class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> s;
        unordered_map<int, int> m;
        //遍历nums中的元素
        for (auto e : nums){
            //堆栈s为空并且堆栈s的栈顶的元素小于e元素,将元素写入map中,key值为栈顶元素,value值为比栈顶元素大的元素
            while(!s.empty() && s.top() < e){
                m[s.top()] = e;
                s.pop();
            }
            s.push(e);
        }
        vector<int> ans;
        //查找findNums中元素,如果m中存在n,返回m[n]的valuse值,如果不存在返回-1
        for (auto n : findNums){
            ans.push_back(m.count(n) ? m[n] : -1);
        }
        return ans;
    }
};