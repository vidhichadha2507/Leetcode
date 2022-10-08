/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        
        // if either of list is empty return the other
        if(list1==null)
            return list2;
        if(list2==null)
            return list1;
        
        // a-ref for traversing list1, b-ref for traversing list2, 
        // head- start node of result, tail= end node of result
        ListNode a = list1, b=list2, head=null, tail=null;
        
        // assigning the head and tail of result based on head nodes of two lists
        if(a.val<=b.val){
            head=a;
            tail=a;
            a=a.next;
        }else{
            head=b;
            tail=b;
            b=b.next;
        }
        
        // traversing both the lists
        while(a!=null && b!=null){
            // node of first list has smaller value, update tail
            if(a.val<=b.val){
                tail.next=a;
                tail=a;
                a=a.next;
            }else{
            // node of second list has smaller value, update tail
                tail.next=b;
                tail=b;
                b=b.next;
            }
        }
        
        // if still some nodes are left in list1, add it to tail
        if(a!=null)
            tail.next=a;
        // if still some nodes are left in list2, add it to tail
        if(b!=null)
            tail.next=b;
        
        // return the result
        return head;
    }
}