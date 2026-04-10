class Solution {
public:
    bool isValid(string s) {
        string st;
        
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push_back(c); // Push dấu '('/'{'/'[' vào stack
            } else {
                if (st.empty()) {
                    return false;
                }
                char back = st.back();
                if ((c == ')' && back == '(') || 
                    (c == '}' && back == '{') || 
                    (c == ']' && back == '[')) {
                    st.pop_back();
                } 
                else {
                    return false;
                }
            }
        }

        // for (char c : s) {

        // }

        return st.empty();
    }
};
