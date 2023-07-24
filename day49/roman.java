//this program is gonna convert the roman number to Integer
//problem link : https://leetcode.com/problems/roman-to-integer/description/
import java.util.*;
public class roman{
public static int romanToInt(String s) {
        int piv = 0 , ans = 0,num = 0;
        for(int i = s.length()-1;i>=0;i--)
        {
        switch(s.charAt(i))
        {
        case 'M' : num = 1000;break;
        case 'D' : num = 500;break;
        case 'C' : num = 100;break;
        case 'L' : num = 50;break;
        case 'X' : num = 10;break;
        case 'V' : num = 5;break;
        case 'I' : num= 1;break;
        }
        if(num<piv)
        {
        ans -=num;
        }
        else ans  +=num;
        piv = num;
        }
        return ans;

        }
public static void main(String args[])
        {
        Scanner sc = new Scanner(System.in);
        String str = "MCMXCIV";
        System.out.println("The integer is " + romanToInt(str));
        }
        }