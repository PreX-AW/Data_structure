#include"SLT.h"
//*************************************creat_signal_block*************************
//Node* buySLT(int val)
//{
//	 Node* ptr = (Node*)malloc(sizeof( Node));
//	 assert(ptr);
//	 ptr->data = val;
//	 ptr->next = NULL;
//	 return ptr;
//
//}
////**************************************Init_SLT***********************
//Node* SLTInit() {
//	int i = 0;
//	Node* head = NULL, *tail = NULL;
//	for (; i < 10; i++) {
//		Node* temp = buySLT(i);
//		if (head == NULL)head = tail = temp;
//		else {
//			tail->next = temp;
//			tail = tail->next;
//		}
//	}
//
//	return head;
//}
////******************************************print_SLT***********************
//
//void print(Node* head) {
//	Node* tail = head;
//	while (tail) {
//		printf("[%d]->", tail->data);
//		tail = tail->next;
//	}
//	printf("NULL\n");
//}
////*********************************************back_push******************************
//Node* SLTBackPush(Node* head) {
//	Node* tail = head;
//	if (head == NULL) {
//		head = buySLT(11111);
//		return head;
//	}
//	while (tail->next) {
//		tail = tail->next;
//	}
//	tail->next = buySLT(100);
//	return head;
//
//}
////**********************************************back_pop****************************
//Node* SLTBackpop(Node* head) {
//	assert(head);
//	Node* tail = head;
//	while (tail->next->next) {
//		tail = tail->next;
//	}
//	free(tail->next->next);
//	tail->next = NULL;
//
//}
////********************************************front_push***********************
//Node* SLTFrontPush(Node* head) {
//	Node* tail = head;
//	if (head == NULL) {
//		head = buySLT(1111);
//		return head;
//	}
//	head = buySLT(222222);
//	head->next = tail;
//	return head;
//
//}
////*****************************************front_pop******************************
//Node* SLTFrontPop(Node* head) {
//	assert(head);
//	Node* tail = head->next;
//	free(head);
//	return tail;
//	
//
//}
////********************************************insert****************************
//Node* SLTInsert(Node* head,int value) {
//	Node* tail = head;
//	if (NULL == head) {
//		head = buySLT(222222);
//		return head;
//	}
//	while (value != tail->next->data) {
//		tail = tail->next;
//	}
//	Node* temp = tail->next;
//	tail->next = buySLT(333333);
//	tail->next->next = temp;
//		return head;
//
//}
//
////*********************************************erease
//Node* SLTErease(Node* head, int value) {
//	assert(head);
//	Node* tail = head;
//	while (tail->next->data != value)
//	{
//		tail = tail->next;
//	}
//
//	Node* temp = tail->next->next;
//	free(tail->next);
//	tail->next = temp;
//	return head;
//
//
//
//
//
//
//
//
//
//
//
//}
////*************************************************find pointer by value*********************************************
//Node* SLTfind(Node*head,int val) {
//	Node* tail = head;
//	while (tail) {
//		if (tail->data != val) {
//			tail = tail->next;
//			continue;
//		}
//		else return tail;
//	}
//	return NULL;
//
//
//
//}
////****************************************************Creat singel Node*****************************************
//Node* BuySLT(int val) {
//	Node* ptr = (Node*)malloc(sizeof(Node));
//	if (ptr) {
//		ptr->next = NULL;
//		ptr->data = val;
//		return ptr;
//	}
//	return NULL;
//
//}
//Node* SLTCreat(int numbers) {
//	Node* head = NULL;
//	Node*tail = NULL;
//	for (int i = 0; i < numbers; i++) {
//		if (NULL == head) {
//			head = tail = BuySLT(i);
//		}
//		else {
//			tail->next = BuySLT(i);
//			tail = tail->next;
//		}	}
//	return head;
//}
//void print(Node* head) {
//	Node* tail = head;
//	while (tail) {
//		printf("[%d]->", tail->data);
//		tail = tail->next;
//	}
//	printf("NULL\n");
//
//}
//
////************************************SLT_push_back**************************
//void SLTBackPush(Node** phead) {
//	if (*phead == NULL) {
//		*phead = BuySLT(100);
//		return;
//	}
//	Node* tail, * head;
//	tail = head = *phead;
//	while (tail->next) {
//		tail = tail->next;
//	}
//	Node* temp = BuySLT(100);
//	assert(temp);
//	tail->next = temp;
//	return;
//
//}
////************************************SLT_POP_BACK*******************************
//void SLTBackpop(Node** phead) {
//	assert(*phead);
//	Node* tail, * head;
//	tail = head = *phead;
//	while (tail->next->next) {
//		tail = tail->next;
//	}
//	free(tail->next);
//	tail->next = NULL;
//
//
//
//}
//
////************************************SLT_PUSH_FRONT**********************************
//void SLTFrontPush(Node** phead) {
//	Node* head, * tail;
//	head = tail = *phead;
//	if(*phead == NULL) {
//		*phead = BuySLT(5555);
//		return;
//	}
//	else {
//		*phead = BuySLT(5555);
//		(*phead)->next = tail;
//	}
//	return;
//
//
//}
////*******************************SLT_POP_FRONT*******************************
//void SLTFrontPop(Node** phead) {
//	assert(*phead);
//	Node* tail = (*phead)->next;
//	free(*phead);
//	*phead = tail;
//	return;
//
//}
//void SLTInsert_After(Node* head, int value) {
//	Node* pos = SLTfind(head, value);
//	assert(pos);
//	Node* tail = head;
//	while (tail != pos) {
//		tail = tail->next;
//	}
//	Node* temp = BuySLT(3333);
//	temp->next = tail->next;
//	tail->next = temp;
//	
//
//	return;
//}
//void SLTErease_After(Node* head, int value) {
//	assert(head);
//	Node* pos = SLTfind(head, value);
//	assert(pos);
//	Node* tail = head;
//	while (tail != pos) {
//		tail = tail->next;
//	}
//	Node* temp = tail->next;
//	tail->next = tail->next->next;
//	free(temp);
//	
//
//}
////***************************************SLT_Destory****************************
//void SLTDestory(Node** phead) {
//	Node* N1 = *phead;
//	while (N1 != NULL) {
//		Node* N2 = N1->next;
//		
//		free(N1);
//		N1 = N2;
//	}
//	*phead = NULL;
//}


#include"SLT.h"
//*********************************************************SLTBuyNode***********************
SLTNode* BuyNode(int val) {
	SLTNode* Newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (Newnode == NULL) {
		perror("Newnode");
		return NULL;
	}
	Newnode->data = val;
	Newnode->next = NULL;
	return Newnode;
}

//*********************************************SLTCreate***********************************
SLTNode* SLTCreate(int val) {
	SLTNode* phead = NULL, * tail = NULL;
	for (int i = 0; i < val; i++) {
		if (phead == NULL) {
			phead = tail = BuyNode(i);
		}
		else {
			tail->next = BuyNode(i);
			tail = tail->next;
		}
	}
	return phead;
}

//********************************SLTprint**********************************
void SLTprint(SLTNode* phead) {
	SLTNode* cur = phead;
	while (cur) {
		printf("[%d]->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}


//********************************SLTPushBack_100***************************
void SLTPushBack(SLTNode** phead) {
	SLTNode* tail = *phead;
	if (tail == NULL) {
		*phead = tail = BuyNode(100);
		return *phead;
	}
	while (tail->next) {
		tail = tail->next;
	}
	tail->next = BuyNode(100);

}
//******************************SLTPopBack_100 *******************************
void SLTPopBack(SLTNode** pphead) {
	assert(*pphead);
	if ((*pphead)->next == NULL) {
		free(*pphead);
		*pphead = NULL;
		return;
	}
	SLTNode* tail = *pphead, * prev = *pphead;
	while (tail->next) {
		prev = tail;
		tail = tail->next;
	}
	free(tail);
	prev->next = NULL;
}

//*******************************SLTPushFront_200***************************
void SLTPushFront(SLTNode** pphead) {
	if (*pphead == NULL) {
		*pphead = BuyNode(200);
		return;
	}
	SLTNode* tail = *pphead;
	*pphead = BuyNode(200);
	(*pphead)->next = tail;
	return;


}

//*****************************SLTPopFront_200**************************************
void SLTPopFront(SLTNode** pphead) {
	assert(*pphead);
	SLTNode* tail = (*pphead)->next;
	free(*pphead);
	*pphead = tail;


}
//********************************SLTNodeFind*************************************
SLTNode* SLTNodeFind(SLTNode*phead,int val) {
	SLTNode* cur = phead;
	while (cur) {
		if (cur->data == val) {
			return cur;
		}
		else cur = cur->next;
	}
	return NULL;
}


//****************************SLTInsertAfter_555*********************************
void SLTInsertAfter(SLTNode* pos,int val){
assert(pos);
	SLTNode*temp=pos->next;
	SLTNode*newNode=BuyNode(555);
	pos->next=newNode;
	newNode->next=temp;
}


//******************************SLTEreaseAfter_555********************************
void SLTEreaseAfter(SLTNode*pos){
assert(pos);
	if(pos->next==NULL){
	return ;
	}
	SLTNode*temp=pos->next;
	pos->next=pos->next->next;
	free(temp);
	temp=NULL;
}

//************************SLTInsert************************************
void SLTInsert(SLTNode**pphead,SLTNode*pos,int val){
	assert(pos);
if(pos==*pphead){
SLTPushFront(pphead,val);
}
	SLTNode*prev=*pphead;
	while(prev->next!=pos){
	prev=prev->next;
	}
	SLTNode*newNode=BuyNode(555);
	newNode->next=prev->next;
	preve->next=newNode;
	
}

//***********************SLTErase************************************
void SLTErase(SLT**pphead,SLTNode*pos){
	assert(*pphead);
	assert(pos);
	 if(*pphead==pos){
	 SLTPopFront(pphead);
		 return ;
	 }
	 SLTNode*cur=*pphead;
	while(cur->next!=pos){
		cur=cur->next;
	}
	cur->next=pos->next;
	free(pos);
	pos=NULL;

}

