import java.util.*;
public class day54 {
    public static void findNum(String[] num , String name)
    {
        StringBuilder sb = new StringBuilder();
        for(int i =0;i<name.length();i++)
        {
            sb.append(num[name.charAt(i)-'a']);
        }
        System.out.println(sb);
    }
    public static void main(String args[])
    {
//      well my program should print the number of any keypad as the name enter
//        let me create a hash map
        String[] num = {"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};
        String name = "aditya";
        findNum(num,name);
    }
}
