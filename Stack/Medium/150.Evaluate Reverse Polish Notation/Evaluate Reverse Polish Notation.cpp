class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int result, rnum, lnum;
        int size = tokens.size();
        for(int i = 0; i < size; i++){
    		if(tokens[i] == "*"){
    		    rnum = s.top();
    			s.pop();
    			lnum = s.top();
    			s.pop();
    			result = lnum * rnum;
    			s.push(result);
    		}
    		else if(tokens[i] == "/"){
    			rnum = s.top();
    			s.pop();
    			lnum = s.top();
    			s.pop();
    			result = lnum / rnum;
    			s.push(result);
    		}
    		else if(tokens[i] == "+"){
    			rnum = s.top();
    			s.pop();
    			lnum = s.top();
    			s.pop();
    			result = lnum + rnum;
    			s.push(result);
    		}
    		else if(tokens[i] == "-"){
    			rnum = s.top();
    			s.pop();
    			lnum = s.top();
    			s.pop();
    			result = lnum - rnum;
    			s.push(result);
    		}
    		else{
    			s.push(atoi(tokens[i].c_str()));
    		}
        }
        return s.top();
    }
};