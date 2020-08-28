import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class RepeatedString {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        long n = in.nextLong();
        int k = s.length();//length of the string
        long d = n / k;//direct divisions.
        int m = (int) (n % k);//modulus to find out the remanent number of characters in the given range n

        Pattern p = Pattern.compile("(a)");
        Matcher mx = p.matcher(s);
        long count = 0;//final number of occurances
        while (mx.find())
            count++;//get Number of times character a is present in the string

        count = count * d;//set the count to number of times the character is in string times the direct division.
        mx = p.matcher(s.substring(0, m));//find out number of occurances of a in the remanent string
        while (mx.find())
            count++;

        System.out.println(count);
        in.close();
    }
}
