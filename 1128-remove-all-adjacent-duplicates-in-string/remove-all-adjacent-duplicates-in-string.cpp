class Solution {
public:
   string removeDuplicates(string s) {
    stack <char> mystack;
    if (s.empty()) return "";
    mystack.push(s[0]);
    for (int i = 1; i < s.length(); i++) {
        if (!mystack.empty() && s[i] == mystack.top()) {
            mystack.pop();
        }
        else {
                mystack.push(s[i]);
        }
    }

    string reversed_final = "";
    while (!mystack.empty()) {
        char c = mystack.top();
        reversed_final += c;
        mystack.pop();
    }
    string final = "";
    for (int i = reversed_final.length()-1; i >= 0; i--) {
        final += reversed_final[i];
    }
    return final;
}
};