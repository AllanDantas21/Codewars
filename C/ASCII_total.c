int uni_total(const char *s) {
  int r = 0;
  
  while (*s)
    {
      r += (int)*s;
      s++;
  }
  return (r);
}