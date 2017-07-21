/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        if (!root) return {};
        vector<int> res;
        TreeNode *now = root, *pre = NULL;
        stack<TreeNode*> s;
        int mx = 0, cnt = 1;
        while (!s.empty() || now) {
            while (now) {             //中序遍历，左中右。将每个结点的左子树入栈
                s.push(now);
                now = now->left;
            }
            now = s.top(); s.pop(); //取栈顶元素
            if (pre) {              //判断当前元素和上一个元素值是否一样，一样cnt计数加一
                cnt = (now->val == pre->val) ? cnt + 1 : 1;
            }                       //如果cnt大于等于mx，说明当前元素重复次数大于之前最大的重复元素的次数，需要将新结果入结果栈。
            if (cnt >= mx) {
                if (cnt > mx) res.clear();
                res.push_back(now->val);
                mx = cnt;
            }
            if (!pre) pre = new TreeNode(now->val); 
            pre->val = now->val;
            now = now->right;
        }
        return res;
    }
};