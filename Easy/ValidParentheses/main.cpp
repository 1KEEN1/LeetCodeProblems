#include <iostream>
#include <stack>
#include <string>

bool isValid(std::string s) {
    std::stack<char> st;

    for (const char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            if (st.empty()) {
                return false;
            }
            char top = st.top();
            st.pop();
            if ((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '[')) {
                    return false;
            }
        }
    }

    return st.empty();
}

int main() {
    std::string s = "([])";

    std::cout << "Is string is valid: " << isValid(s) << std::endl;
    
    return 0;
}