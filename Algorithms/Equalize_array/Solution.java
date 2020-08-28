import java.io.*;
import java.util.*;
import java.util.stream.IntStream;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int a_i = 0; a_i<n; a_i++){
            a[a_i] = in.nextInt();
        }
        int max = 0;
        List<Integer> list = new ArrayList<Integer>();
        for (int item : a)
        {
            list.add(item);
        }
        for(int item : a) {
            int frequency = Collections.frequency(list, item);
            max = Math.max(max, frequency);
        }
        System.out.println(n-max);
    }
}