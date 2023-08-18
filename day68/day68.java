import java.util.*;
public class Main {
	
	public static void main(String[] args) {
		// Write your code here
		Scanner sc = new Scanner(System.in);
			int n = sc.nextInt();
			int temp = n;
			int c = 0;
			while(temp!=0)
			{
				c++;
				temp /=10;
			}
			int res = 0;
			temp = n;
			while(temp!=0)
			{
				res += Math.pow(temp%10,c);
				temp /=10;
			}
			if(res == n) System.out.println("true");
			else System.out.println("false");

	}
}
