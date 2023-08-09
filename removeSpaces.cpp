#include <iostream>
#include <string>

int main() {
    std::string input = "This is a sample string with spaces.";
    std::string output = "";

    for (char c : input) {
        if (c != ' ') {
            output += c;
        }
    }

    std::cout << "Original string: " << input << std::endl;
    std::cout << "String without spaces: " << output << std::endl;

    return 0;
}


