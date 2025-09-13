#include <vector>

char findMissingLetter(const std::vector<char>& chars)
{
    int firstAsciiNb = (int)(chars[0]);
    for (size_t i = 0; i < chars.size(); i++) {
        int expAscii = firstAsciiNb + (int)(i);
        int currAscii = (int)(chars[i]);
        if (currAscii != expAscii) {
            return (int)(expAscii);
        }
    }
    return (int)(firstAsciiNb + (int)(chars.size()));
}