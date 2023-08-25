import java.util.* ;

import java.io.*; 

 

public class Solution {

 

    public static List<List<Integer>> fahrenheitToCelsius(int s, int e, int w) {

        // Write your code here

        List <List<Integer>> l=new ArrayList<>();

        for(int i=s;i<=e;i=i+w){

            List <Integer> ls=new ArrayList<>();

            int c=(i-32)*5/9;

            ls.add(i);

            ls.add(c);

            l.add(ls);

        }

            return l;

    }

 

}
