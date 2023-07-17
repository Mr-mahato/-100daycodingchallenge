// well this solution is from potd of #gfg 

class Solution
{
    public String FirstNonRepeating(String A)
    {
       HashMap<Character,Integer> map=new HashMap<>();
        Queue<Character> q=new LinkedList<>();
        StringBuilder result=new StringBuilder();
        for(char ch:A.toCharArray()){
            map.put(ch,map.getOrDefault(ch,0)+1);
            if(map.get(ch)==1){
                q.add(ch);
            }
            while(!q.isEmpty()&& map.get(q.peek())>1){
                q.poll();
            }
            if(q.isEmpty()){
                result.append("#");
            }else{
                result.append(q.peek());
            }
        }
        return result.toString();
    }
}