//
//  Merge_Two_Sorted_Lists.cpp
//  codilitySolutions
//
//  Created by Kishwar Kumar on 11.09.22.
//

#include "Merge_Two_Sorted_Lists.hpp"

/*
 You are given the heads of two sorted linked lists list1 and list2.
 Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

 Return the head of the merged linked list.
 
 Example 1:
    Input: list1 = [1,2,4], list2 = [1,3,4]
    Output: [1,1,2,3,4,4]
 
 Example 2:
    Input: list1 = [], list2 = []
    Output: []
 
 Example 3:
    Input: list1 = [], list2 = [0]
    Output: [0]
 
 Constraints:
    The number of nodes in both lists is in the range [0, 50].
    -100 <= Node.val <= 100
    Both list1 and list2 are sorted in non-decreasing order.
 ***/

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    
    ListNode *ln = new ListNode();
    ListNode *prev = NULL, *head = ln;
        
    if(list1 == NULL && list2 == NULL) {
        return NULL;
    }
    
    while(true) {
        if(list1 != NULL && list2 != NULL) {   // condition 1 (both lists are valid)
            
            // we will occupy 1 node therefore pre-alloc 1 node
            ln->next = new ListNode();
            
            if(list1->val < list2->val) {
                ln->val = list1->val;
                list1 = list1->next;
            } else {
                ln->val = list2->val;
                list2 = list2->next;
            }
            
            prev = ln;
            ln = ln->next;
            
        } else if(list1 == NULL && list2 != NULL) {   // condition 2 (list 2 is valid)
            
            // we will occupy 1 node therefore pre-alloc 1 node
            ln->next = new ListNode();
            
            ln->val = list2->val;
            
            list2 = list2->next;
            
            prev = ln;
            ln = ln->next;
            
        } else if(list1 != NULL && list2 == NULL ) {  // condition 3 (list 1 is valid)
            
            // we will occupy 1 node therefore pre-alloc 1 node
            ln->next = new ListNode();
            
            ln->val = list1->val;
            
            list1 = list1->next;
            
            prev = ln;
            ln = ln->next;
            
        } else {            // condition 4 both lists have reached to the end
            
            // we have a node which is not used yet, remove it
            ln = prev;
            ln->next = NULL;
            break;
        }
    }

    return head;
}


/*
 To test above code...
 
 ListNode *l1 = new ListNode(5, NULL);
 l1 = new ListNode(4, l1);
 l1 = new ListNode(3, l1);
 
 ListNode *l2 = new ListNode(6, NULL);
 l2 = new ListNode(2, l2);
 l2 = new ListNode(1, l2);
 
 ListNode *r;
 
 r = mergeTwoLists(l1, l2);
 
 while(true) {
     if(r != NULL) {
         std::cout << r->val << std::endl;
         r = r->next;
     }
 }
 
 codility result:
 
 Runtime: 7 ms, faster than 88.14% of C++ online submissions for Merge Two Sorted Lists.
 
 **/
