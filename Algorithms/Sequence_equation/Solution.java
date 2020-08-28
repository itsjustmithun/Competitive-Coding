import java.util.*;
public class Solution {
    public static void main(String args[] ){
        Scanner scan=new Scanner(System.in);
        int n=scan.nextInt();
        HashMap<Integer,Integer> mp=new HashMap<Integer,Integer>();
        for(int i=1;i<=n;i++)   mp.put(scan.nextInt(),i);
         for(int i=1;i<=n;i++) System.out.println(mp.get(mp.get(i)));
    }
}