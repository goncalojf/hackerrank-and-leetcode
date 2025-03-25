#include<stdio.h>

// https://leetcode.com/problems/merge-two-sorted-lists/?envType=problem-list-v2&envId=plakya4j

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
     // If one of the lists is null, it means that we can just return the other.
     if (list1 == NULL) return list2;
     if (list2 == NULL) return list1;
 
     // Starting pointer.
     struct ListNode* start_pointer = list1;
     if (list1->val > list2->val) {
         start_pointer = list2;
         list2 = list2->next;
     } else {
         list1 = list1->next;
     }
 
     struct ListNode* curr = start_pointer;
     
     while (list1 && list2) {
         if (list1->val < list2->val) {
             curr->next = list1;
             list1 = list1->next;
         } else {
             curr->next = list2;
             list2 = list2->next;
         }
         curr = curr->next;
     }
 
     if (!list1)
         curr->next = list2;
     else
         curr->next = list1;
 
     return start_pointer;
 }