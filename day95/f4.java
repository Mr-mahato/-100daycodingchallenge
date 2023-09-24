
// problem link : https://www.codingninjas.com/studio/problems/count-nodes-of-linked-list_5884?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0
public class Solution {
    public static int length(Node head){
        //Your code goes here
        int len = 0;
        while(head!=null){
            len++;
            head = head.next;
        }
        return len;
    }
}