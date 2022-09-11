//
//  main.cpp
//  codilitySolutions
//
//  Created by Kishwar Kumar on 24.01.21.
//

#include <iostream>
#include <vector>

#include "Merge_Two_Sorted_Lists.hpp"


int main(int argc, const char * argv[]) {

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
    return 0;
}
