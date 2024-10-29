#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(int x) {
    std::string str = std::to_string(x);
    std::string reverseStr = str;
    std::reverse(str.begin(), str.end());

    for (std::size_t i = 0; i < str.size() / 2; ++i) {
        if (str[i] != reverseStr[i])
            return false;
    }

    return true;
}

int main() {
    int x = 121;

    std::cout << "Number x is palindrome?" << std::endl << isPalindrome(x) << std::endl;

    return 0;
}