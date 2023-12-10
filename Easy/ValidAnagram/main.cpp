#include <iostream>
#include <algorithm>
    
bool isAnagram(std::string s, std::string t) {
    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());
    return s == t;
}

int main() {
    std::string str1 = "anagram";
    std::string str2 = "nagaram";

    std::cout << isAnagram(str1, str2);

    return 0;
}