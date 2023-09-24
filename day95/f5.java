
// problem  link :https://www.codingninjas.com/studio/problems/search-in-a-linked-list_975381?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0
public class Solution
{
    public static int searchInLinkedList(Node head, int k)
    {
        // Write Your Code Here.
        while(head!=null)
        {
            if(head.data==k)
            {
                return 1;
            }
            head = head.next;
        }
        return 0;
    }
}