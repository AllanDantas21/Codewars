int ordered_sum(int a, int b)
{
  int sum = 0;
  while (a<=b){
    sum += a;
    a++;
    }
  return sum;
}

int unorded_sum(int a, int b)
{
  int sum = 0;
  while (b<=a){
    sum += b;
    b++;
    }
  return sum;
}


int get_sum(int a, int b)
{
    int res = (a < b) ? ordered_sum(a,b) : unorded_sum(a,b);
    return res;
}