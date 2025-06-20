class Solution { 
public:
    bool isPair(char a, char b) {
        if (a == '{' && b == '}') return true;
        if (a == '[' && b == ']') return true;
        if (a == '(' && b == ')') return true;
        return false;
    }

    bool isValid(string s) {
        stack<char> mystack;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
                mystack.push(s[i]);
            } else {
                if (!mystack.empty() && isPair(mystack.top(), s[i])) {
                    mystack.pop();
                } else {
                    return false;
                }
            }
        }
        
        return mystack.empty();
    }
};
