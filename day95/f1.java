
// problem link :https://www.codingninjas.com/studio/problems/introduction-to-linked-list_8144737?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0
public class Solution {
    public static Node addtolast(Node head , int x)
    {
        Node temp = new Node(x);
        Node check = head;
        if(head==null)
        {
            return temp;
        }
        while(check.next!=null)
        {
            check = check.next;
        }
        check.next = temp;
        return head;
    }
    public static Node constructLL(int []arr) {
        // Write your code here
        Node head = null;
        for(int i = 0;i<arr.length;i++)
        {
            head = addtolast(head,arr[i]);
        }
        return head;

    }
}