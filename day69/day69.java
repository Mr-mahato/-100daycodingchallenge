public class day69 {
        public static String lookAndSaySequence(int n) {
    
            if(n==1){
    
                return "1";
    
            }
    
            String s = lookAndSaySequence(n-1);
    
            StringBuilder result = new StringBuilder();
    
            int count=0;
    
             for(int i=0;i<s.length();i++){
    
                count++;
    
                if(i==s.length()-1 || s.charAt(i) != s.charAt(i+1)){
    
                    result.append(count).append(s.charAt(i));
    
                    count=0;
    
                }
    
            }
    
            return result.toString();
    
        }
}
