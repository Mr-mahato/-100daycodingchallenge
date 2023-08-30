import java.util.ArrayList;
public class Solution {

	public static int removeDuplicates(ArrayList<Integer> arr,int n) {
		// Write your code here.
		int ans = 1;
		
		for(int i =0;i<(n-1);i++)
		{
			int a = arr.get(i);
			int b =arr.get(i+1);
			if(a!=b)
			{
				ans++;
			}
		}
		return ans;
	}
}