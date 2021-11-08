/**
* Contributor🎅
* Name: Ashutoshpandey-coder (Ashutosh pandey)
* Github: https://github.com/Ashutoshpandey-coder
*/

/* ABOUT STACK INTRO 
     A stack or LIFO (Last in, first out) is an abstract data type that serves
    as a collection of elements, with two principal operations : 
        push, which adds an element to the collection, and pop, 
        which removes the last element that was added.
*/

/* PROBLEM STATEMENT 
    * A string containing only parentheses is balanced if the following is true: 1.
        if it is an empty string 2. if A and B are correct,
        AB is correct, 3. if A is correct, (A) and {A} and [A] are also correct.
    * Examples of some correctly balanced strings are: "{}()", "[{()}]", "({()})"
    * Examples of some unbalanced strings are: "{}(", "({)}", "[[", "}{" etc.
    * Given a string, determine if it is balanced or not. 
*/

/*INPUT FORMAT 
    * There will be multiple lines in the input file, each having a single non-empty string.
      You should read input till end-of-file.
      The part of the code that handles input operation is already provided below.
*/

/* OUTPUT FORMAT
    * For each case, print 'true' if the string is balanced, 'false' otherwise.
*/

/* SAMPLE INPUT
    *   {}()
        ({()})
        {}(
        []
*/

/* SAMPLE OUTPUT
    *   true
        true
        false
        true
*/

import java.util.*;
import java.io.*;
import java.util.*;

public class JavaStack {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()) {
            String input = sc.next();
            System.out.println(balanaced(input));
        }
        sc.close();
    }
    // You have to complete this one .
    public static boolean balanaced(String s) {
        Stack<Character> stack = new Stack<Character>();
        for(int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if(c =='[' || c == '(' || c == '{') {
                stack.push(c);
            }else if(c == ']') {
                if(stack.isEmpty() || stack.pop() != '[') {
                    return false;
                }
            }else if(c == ')') {
                if(stack.isEmpty() || stack.pop() != '(') {
                    return false;
                }
            }else if(c == '}') {
                if(stack.isEmpty() || stack.pop() != '{') {
                    return false;
                }
            }
        }
        return stack.isEmpty();
    }
}
/* SAMPLE TESTCASE 
    ({}[])
    (({()})))
    ({(){}()})()({(){}()})(){()}
    {}()))(()()({}}{}
    }}}}
    ))))
    {{{
    (((
    []{}(){()}((())){{{}}}{()()}{{}{}}
    [[]][][]
    }{

*/
/* OUTPUT OF SAMPLE TESTCASE 
    true
    false
    true
    false
    false
    false
    false
    false
    true
    true
    false
*/
