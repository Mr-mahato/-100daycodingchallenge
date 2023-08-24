package day73;

// this problem is being solved from Coding ninjas sly grond
import java.util.* ;
import java.io.*; 
public class Solution {
	public static void printPattern(int n){
		// Write your code here.
		int m = 1;
		for(int i =0;i<n;i++)
		{
			for(int j= 0;j<n-i-1;j++)
			{
				System.out.print(" ");
			}
			for(int k = 0;k<m;k++)
			{
				System.out.print("*");
			}
			System.out.println();
			m+=2;
		}
	}
}
