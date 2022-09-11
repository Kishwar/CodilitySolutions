//
//  Merge_Two_Sorted_Lists.hpp
//  codilitySolutions
//
//  Created by Kishwar Kumar on 11.09.22.
//

#ifndef Merge_Two_Sorted_Lists_hpp
#define Merge_Two_Sorted_Lists_hpp

#include <stdio.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);

#endif /* Merge_Two_Sorted_Lists_hpp */
