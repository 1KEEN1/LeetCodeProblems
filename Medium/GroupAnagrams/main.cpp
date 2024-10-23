#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
    std::unordered_map<std::string, std::vector<std::string>> anagramMap;

    for (const auto& word : strs) {
        std::string sortedWord = word;
        std::sort(sortedWord.begin(), sortedWord.end());

        anagramMap[sortedWord].push_back(word);
    }

    std::vector<std::vector<std::string>> out;
    for (const auto& pair : anagramMap) {
        out.push_back(pair.second);
    }

    return out;
}

int main() {
    std::vector<std::string> strs = {"eat","tea","tan","ate","nat","bat"};
    std::vector<std::vector<std::string>> out = groupAnagrams(strs);
    
    for (std::vector<std::string> stringVecs : out) {
        for (std::string strings : stringVecs) {
            std::cout << strings << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    return 0;
}