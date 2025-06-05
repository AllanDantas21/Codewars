public class Hello{
  public String sayHello(String [] name, String city, String state){
    String fullName = String.join(" ", name);
    
    String helloString = "Hello, " + fullName + "! Welcome to " + city + ", " + state + "!";
    return helloString;
  }
}