#include <iostream>
#include <string>
#include <cctype>

class Accumul
{
public:
    static std::string accum(const std::string &s);
};

std::string buildStringSection(char target, int idx) {
    std::string res;
    res += std::toupper(target);
    for (int i = 1; i < idx; i++) {
        res += std::tolower(target);
    }
    return (res);
}

std::string Accumul::accum(const std::string &s) {
    std::string result;
    
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        result += buildStringSection(c, i + 1);
        if (i < s.length() - 1) {
            result += "-";
        }
    }
    return (result);
}