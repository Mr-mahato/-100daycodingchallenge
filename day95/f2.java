
// problem link :https://www.codingninjas.com/studio/problems/insert-node-at-the-beginning_8144739?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0
public class Solution
{
    public static Node addtoFirst(Node head , int val){
        Node temp = new Node(val);
        temp.next = head;
        head = temp;
        return head;
    }
    public static Node insertAtFirst(Node list, int newValue) {
        // Write your code here
        Node head;
        head = addtoFirst(list,newValue);
        return head;
    }
}