import java.util.*;
class Solution {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int test=1;test<=t;test++) {
            String s=sc.next(),a="";
            int numberCharsTaken;
            int flag = 0,x=0;
            for(numberCharsTaken = 1;numberCharsTaken<=s.length();numberCharsTaken++) {
                a = s.substring(s.length() - numberCharsTaken);
                for(x = a.length()-1;x>0;x--) {
                    if(a.charAt(0)<a.charAt(x)) {
                        flag = 1;
                        break;
                    }
                    if(flag == 1)
                        break;
                }
                if(flag == 1)
                    break;
            }
            if(flag == 1){
                String temp = a.substring(0,x)+a.substring(x+1);
                char c[] = temp.toCharArray();
                Arrays.sort(c);
                temp = a.charAt(x) + new String(c);
                String ans = s.substring(0,s.length()-numberCharsTaken)+temp;
                System.out.println(ans);    
            }
            else
                System.out.println("no answer");
        }
    }
}