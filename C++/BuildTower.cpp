#include <string>
#include <vector>

std::string buildLine(unsigned stars, unsigned padding) {
    std::string s;
    s.append(padding, ' ');
    s.append(stars, '*');
    s.append(padding, ' ');
    return s;
}

std::vector<std::string> buildVec(unsigned lines) {
    std::vector<std::string> res;
    
    unsigned padding = lines - 1;
    unsigned stars = 1;
    
    for (unsigned i = 0; i < lines; i++) {
        res.push_back(buildLine(stars, padding));
        stars += 2;
        padding -= 1;
    }
    return res;
}

std::vector<std::string> towerBuilder(unsigned nFloors) {
    if (nFloors == 0) return {};
    
    return buildVec(nFloors);
}