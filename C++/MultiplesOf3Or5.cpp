int solution(int number) 
{
  if (number<0)
    return 0;
  
  int i=0;
  int res=0;
  while(i<number){
    if (i%3==0 || i%5==0){
        res += i;
    }
    i++;
  }
  return res;
}