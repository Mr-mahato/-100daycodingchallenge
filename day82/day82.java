import java.util.*;
import java.io.*;

public class Solution {
    public static boolean checkDiff(int[] arr, int N, int K) {
        // WRITE YOUR CODE HERE
        HashSet<Integer> hs = new HashSet<>();
        for (int val : arr) {
            if (hs.contains(val - K) || hs.contains(val + K)) {
                return true;
            } else {
                hs.add(val);
            }
        }
        return false;
    }
}
