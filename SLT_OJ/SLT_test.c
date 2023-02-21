//*************************************************fast_slow_pointer_k_node**************************
/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

/**
 * 
 * @param pListHead ListNode类 
 * @param k int整型 
 * @return ListNode类
 */
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k ) {
    // write code here
struct ListNode*fast,*slow=NULL;
slow=fast=NULL;
while(k--){
    if(fast==NULL){
        slow=fast=pListHead;
    }
    else{
fast=fast->next;
if(fast==NULL)return NULL;

}
    }

while(fast&&fast->next){
fast=fast->next;
slow=slow->next;

}
return slow;


}

//*********************************************


//*********************************************SLT的中间节点******************************
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* middleNode(struct ListNode* head) {
struct ListNode*fast,*slow;
fast=slow=head;
while(fast&&fast->next){
    fast=fast->next->next;
    slow=slow->next;
}
return slow;


}

//*****************************************反转SLT*******************************

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
if(NULL==head)return NULL;
struct ListNode*prev,*cur,*tail;
prev=NULL;
cur=head;
tail=head->next;
while(cur){
    cur->next=prev;
    prev=cur;
    
    cur=tail;
    if(tail){
    tail=tail->next;

    }
}
return prev;
}

//************************************************移除targetSLT节点*********************
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
if(NULL==head)return NULL;
while(val==head->val){
    head=head->next;
    if(NULL==head)return NULL;
}

struct ListNode* prev,*cur;
cur=head->next;
prev=head;
while(cur){
if(val==cur->val){
    prev->next=cur->next;
    
    cur=cur->next;
    }
else{
    prev=cur;
    cur=cur->next;
    }
}

return head;
}

//**************************************merge tow list with no-decrease******************************
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if(NULL==list1)return list2;
    if(NULL==list2)return list1;
struct ListNode*l1cur,*l2cur,*cur,*list,temp;
cur=&temp;
l1cur=list1;
l2cur=list2;
list=list1->val>=list2->val? list2:list1;
while(l1cur&&l2cur){
    if(l1cur->val>=l2cur->val){
        cur->next=l2cur;
        cur=cur->next;
        l2cur=l2cur->next;
    }
    else{
        cur->next=l1cur;
        cur=cur->next;
        l1cur=l1cur->next;
    }

}
while(l2cur){
    cur->next=l2cur;
    l2cur=l2cur->next;
    cur=cur->next;
}
while(l1cur){
    cur->next=l1cur;
    l1cur=l1cur->next;
    cur=cur->next;

}


return list;
}



//*************************************************last K node*****************************
/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

/**
 * 
 * @param pListHead ListNode类 
 * @param k int整型 
 * @return ListNode类
 */
struct  ListNode* FindKthToTail(struct ListNode* pListHead, int k ) {
int count=0;
struct ListNode*fast,*slow;
fast=slow=pListHead;
int temp=k;
while(k--){
    if(NULL!=fast){
    fast=fast->next;
    count++;

    }
}
if(count+1<=temp)return NULL;
while(fast){
    fast=fast->next;
    slow=slow->next;
}
return slow;
//**************************saparate SLT********************************
/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        // write code here
        
        struct ListNode* lesshead,*lesstail,*greathead,*greattail;
        lesshead=lesstail=((struct ListNode*)malloc(sizeof(struct ListNode)) );
        greathead=greattail=((struct ListNode*)malloc(sizeof(struct ListNode)));
        struct ListNode* cur=pHead;
        while(cur){
            if(cur->val<x){
                lesstail->next=cur;
                lesstail=lesstail->next;
            }
            else{
                greattail->next=cur;
                greattail=greattail->next;
            }
            cur=cur->next;
        }
    lesstail->next=greathead->next;
    greattail->next=NULL;
    struct ListNode* rhead=lesshead->next;
    free(lesshead);
    free(greathead);

    return  rhead;





        
    }
};
//*************************************same address SLTS****************
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
                  int countA=0,countB=0;
                  struct ListNode*curA=headA,*curB=headB;
                  while(curA||curB){
                      if(curA){
                        curA=curA->next;
                      countA++;
                      }
                      if(curB){
                        curB=curB->next;
                        countB++;
                      }
                        
                  }
                  if(curA!=curB)return NULL;
               struct ListNode*fast=countA>countB?headA:headB;
                struct ListNode*slow=countA>countB?headB:headA;
                int step=countA-countB;
                if(countA<countB)step=countB-countA;
                while(step--){
                    fast=fast->next;
                    if(fast==NULL)return NULL;
                }

while(fast){
    if(fast==slow)return fast;
    fast=fast->next;
    slow=slow->next;
}
return NULL;




}
//**************************************mirror SLT**********************
 Node* middleNode( Node* head) {
     Node* fast, * slow;
    fast = slow = head;
    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;


}
//反转回文链表
 Node* reverseList( Node* head) {
    if (NULL == head)return NULL;
     Node* prev, * cur, * tail;
    prev = NULL;
    cur = head;
    tail = head->next;
    while (cur) {
        cur->next = prev;
        prev = cur;

        cur = tail;
        if (tail) {
            tail = tail->next;

        }
    }
    return prev;
}
//匹配函数
int chkPalindrome(Node* A) {
    // write code here
    Node* rhead = middleNode(A);
    rhead=reverseList(rhead);
    while (rhead) {
        if (rhead->val != A->val)return 0;;
        rhead = rhead->next;
        A = A->next;
    }

    return 1;

}
//*****************************************
