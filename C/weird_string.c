#include <ctype.h>

void weird(char *string, int i) {
  int counter = 0;
  
  if (!string[i])
    return ;
  while (string[i] && string[i] == ' ')
    i++;
  while (string[i] && string[i] != ' '){
      if (counter % 2 == 0)
        string[i] = toupper(string[i]);
      else string[i] = tolower(string[i]);
    counter++;
    i++;
  }
  weird(string, i);
}

char *to_weird_case (char *string)
{
  int i = 0;
  weird(string, i);
  return string;
}
