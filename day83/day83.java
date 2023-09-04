import java.util.*;
public class day83 {
    public static void main(String[] args){
        ArrayList<String> str = new ArrayList<String>();
        str.add("d");
        str.add("e");
        str.add("a");
        str.add("x");
        str.add("q");
        str.add("r");
        str.add("x");
        str.add("p");
        str.add("y");
        System.out.println(str);

        ArrayList<String> ans = new ArrayList<String>();
        for(int i =0;i<str.size();i++){
            if(str.get(i)=="x")
            {
                for(int j = 1;j<=5;j++)
                {
                    ans.add("y");
                }
            }
            else ans.add(str.get(i));
        }
        System.out.println(ans);
    }
}
