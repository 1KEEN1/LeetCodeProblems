#include <iostream>
#include <vector>
#include <string>

std::vector<int> numberOfLines(std::vector<int>& widths, std::string s) {
    int currentWidth = 0;
    int lines = 1;

    for (const char& c : s) {
        int charWidth = widths[c - 'a'];
        if (charWidth + currentWidth > 100) {
            currentWidth = charWidth;
            lines++;
        } else {
            currentWidth += charWidth;
        }
    }

    return {lines, currentWidth};
}

int main() {
    std::vector<int> widths = {4, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    std::string s = "bbbcccdddaaa";
    std::vector<int> out = numberOfLines(widths, s);

    std::cout << "Lines: " << out[0] << std::endl << "Width: " << out[1] << std::endl;

    return 0;
}