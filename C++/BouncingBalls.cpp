using namespace std;
class Bouncingball
{
private:
  static double calcBouncingHeith(double lastBouncingHeith, double bouncePercentage) {
    return lastBouncingHeith * bouncePercentage;
}
  
public: 
    static int bouncingBall(double h, double bounce, double window){
      if (h <= 0 || bounce <= 0 || bounce >= 1 || window >= h)
        return (-1);
      
      int bouncingBalls = 1;
      double lastBouncingHeith = calcBouncingHeith(h, bounce);
      while (lastBouncingHeith > window){
        bouncingBalls += 2;
        lastBouncingHeith = calcBouncingHeith(lastBouncingHeith, bounce);
      }
      return bouncingBalls;
    }
};