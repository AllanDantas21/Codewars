#include <sys/types.h>
#include <string.h>
#include <limits.h>

ssize_t find_short(const char *s)
{
    ssize_t min = SSIZE_MAX;
    int chars = 0;
    
    for (int i = 0; s[i]; i++) {
        if (s[i] == ' ') {
            if (chars > 0)
                min = (chars < min) ? chars : min;
            chars = 0;
        } else chars++;
    }
    if (chars > 0) min = (chars < min) ? chars : min;
  return (min);
}
