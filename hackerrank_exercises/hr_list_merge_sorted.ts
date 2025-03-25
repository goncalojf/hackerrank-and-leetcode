// https://leetcode.com/problems/merge-two-sorted-lists/?envType=problem-list-v2&envId=plakya4j
class ListNode {
     val: number;
     next: ListNode | null;
     constructor(val: number, next: ListNode | null = null) {
         this.val = val;
         this.next = next;
     }
 }

function arrayToList(arr: number[]): ListNode | null {
     if (arr.length === 0) return null;
     const head = new ListNode(arr[0]);
     let curr = head;
     for (let i = 1; i < arr.length; i++) {
         curr.next = new ListNode(arr[i]);
         curr = curr.next;
     }
     return head;
 }

function mergeTwoLists(list1: ListNode | null, list2: ListNode | null): ListNode | null {
     if (list1 === null) { return list2 }
     if (list2 === null) { return list1 }

     if (list1.val < list2.val) {
          list1.next = mergeTwoLists(list1.next, list2);
          return list1
     } else {
          list2.next = mergeTwoLists(list1, list2.next);
          return list2
     }
};

const test1 = [1, 2, 3];
const test2 = [2, 3, 4];

const result = mergeTwoLists(arrayToList(test1), arrayToList(test2));

let curr: ListNode | null = result;
const list: number[] = [];
while (curr != null) {
     list.push(curr.val);
     curr = curr.next;
}
console.log(list);

