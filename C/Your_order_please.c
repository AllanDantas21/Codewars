#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int is_space(char c) { return (c == ' '); }

int find_and_order(const char *words, char *ordered, int *ordered_idx, unsigned char key) {
  int i = 0;
  int wlen = 0;
  int find_key = 0;
  
  while(words[i])
    {
    int word_start = i;
    wlen = 0;
    
    while(words[i] && !is_space(words[i])) {
      if (words[i] == key)
        find_key = 1;
      i++;
      wlen++;
    }
    
    if (find_key) {
      if (*ordered_idx > 0) {
        ordered[(*ordered_idx)++] = ' ';
      }
      
      for (int j = 0; j < wlen; j++) {
        ordered[(*ordered_idx)++] = words[word_start + j];
      }
      return 1;
    }
    
    while(words[i] && is_space(words[i])) {
      i++;
    }
  }
  return 0;
}

char *order_words (char *ordered, const char *words)
{
  if (!words || strlen(words) == 0) {
    if (ordered) {
      ordered[0] = '\0';
      return ordered;
    }
  }
  
  int ordered_idx = 0;
  int orders = 1;
  
  while (find_and_order(words, ordered, &ordered_idx, '0' + orders)) {
    orders++;
  }
  
  ordered[ordered_idx] = '\0';
  return ordered;
}