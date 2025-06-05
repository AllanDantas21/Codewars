public class Kata {
    public static int findShort(String s) {
        String[] words = s.split(" ");
        int min = 2147483647;
        for (String word : words)
          min = (word.length() < min ? word.length() : min);
        return min;
    }
}

