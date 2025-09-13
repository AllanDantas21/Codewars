namespace Triangle
{
  bool verifyIsValid(int x1, int x2, int x3){
    return (x1 + x2 > x3);
  }
  
  bool isTriangle(int a, int b, int c)
  {
    return (verifyIsValid(a,b,c) && verifyIsValid(a,c,b) && verifyIsValid(b,c,a));
  }
};