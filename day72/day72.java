import java.util.* ;
import java.io.*; 
import java.util.ArrayList;

public class Solution {

	public static ArrayList<ArrayList<Integer>> numberPattern(int n) {

		// Write your code here.
		ArrayList<ArrayList<Integer>> res = new ArrayList<>();
		int val = 1;
		for(int i = 0; i<n; i++) {
			ArrayList<Integer> row = new ArrayList<>();
			for(int j = 0; j < n-i-1; j++) {
				row.add(-1);
			}
			for(int k = n-i-1; k < n; k++) {
				row.add(val);
				val++;
				val = val%10==0? 1:val;
			}
			res.add(row);
		}
		return res;
	}
}