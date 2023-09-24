
// problem link : https://www.codingninjas.com/studio/problems/delete-node-of-linked-list_8160463?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0
public class Solution {
    public static Node removeLastNode(Node head)
    {
        Node temp = head;
        if(head==null || head.next==null)
        {
            head = null;
            return head;
        }
        while(head.next.next!=null){
            head = head.next;
        }
        head.next = null;
        return temp;
    }
    public static Node deleteLast(Node list){
        // Write your code here
        list = removeLastNode(list);
        return list;
    }
}
