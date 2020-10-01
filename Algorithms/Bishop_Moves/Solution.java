public class Solution {

    public int solve(int A, int B) {
        int count = 0;
        count += Math.min(A-1, B-1);
        count += Math.min(8 - A, 8 - B);
        count += Math.min(A-1, 8 - B);
        count += Math.min(8-A, B-1);
        return count;
    }
}
