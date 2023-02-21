#include"oj.h"

//寻找中间节点
// Node* middleNode( Node* head) {
//     Node* fast, * slow;
//    fast = slow = head;
//    while (fast && fast->next) {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    return slow;
//
//
//}
////反转回文链表
// Node* reverseList( Node* head) {
//    if (NULL == head)return NULL;
//     Node* prev, * cur, * tail;
//    prev = NULL;
//    cur = head;
//    tail = head->next;
//    while (cur) {
//        cur->next = prev;
//        prev = cur;
//
//        cur = tail;
//        if (tail) {
//            tail = tail->next;
//
//        }
//    }
//    return prev;
//}
////匹配函数
//int chkPalindrome(Node* A) {
//    // write code here
//    Node* rhead = middleNode(A);
//    rhead=reverseList(rhead);
//    while (rhead) {
//        if (rhead->val != A->val)return 0;;
//        rhead = rhead->next;
//        A = A->next;
//    }
//
//    return 1;
//
//}
int main() {
	int arr1[SIZE] = { 1,2,3,2,1 };;
	int arr2[SIZE] = { 1,2,3,3,1 };;
    Node*plist1=creatSLT(arr1, 5);
    Node* plist2 = creatSLT(arr2, 5);

    int p1 = chkPalindrome(plist1);
    printf("%d\n", p1);
    

    int p2 = chkPalindrome(plist1);
    printf("%d\n", p2);




	return 0;
}