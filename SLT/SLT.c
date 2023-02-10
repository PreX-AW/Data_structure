#include"SLT.h"
//*************************************creat_signal_block*************************
Node* buySLT(int val)
{
	 Node* ptr = (Node*)malloc(sizeof( Node));
	 assert(ptr);
	 ptr->data = val;
	 ptr->next = NULL;
	 return ptr;

}
//**************************************Init_SLT***********************
Node* SLTInit() {
	int i = 0;
	Node* head = NULL, *tail = NULL;
	for (; i < 10; i++) {
		Node* temp = buySLT(i);
		if (head == NULL)head = tail = temp;
		else {
			tail->next = temp;
			tail = tail->next;
		}
	}

	return head;
}
//******************************************print_SLT***********************

void print(Node* head) {
	Node* tail = head;
	while (tail) {
		printf("[%d]->", tail->data);
		tail = tail->next;
	}
	printf("NULL\n");
}

Node* SLTBackPush(Node* head) {
	Node* tail = head;
	if (head == NULL) {
		head = buySLT(11111);
		return head;
	}
	while (tail->next) {
		tail = tail->next;
	}
	tail->next = buySLT(100);
	return head;

}
Node* SLTBackpop(Node* head) {
	assert(head);
	Node* tail = head;
	while (tail->next->next) {
		tail = tail->next;
	}
	free(tail->next->next);
	tail->next = NULL;

}

Node* SLTFrontPush(Node* head) {
	Node* tail = head;
	if (head == NULL) {
		head = buySLT(1111);
		return head;
	}
	head = buySLT(222222);
	head->next = tail;
	return head;

}
Node* SLTFrontPop(Node* head) {
	assert(head);
	Node* tail = head->next;
	free(head);
	return tail;
	

}
Node* SLTInsert(Node* head,int value) {
	Node* tail = head;
	if (NULL == head) {
		head = buySLT(222222);
		return head;
	}
	while (value != tail->next->data) {
		tail = tail->next;
	}
	Node* temp = tail->next;
	tail->next = buySLT(333333);
	tail->next->next = temp;
		return head;

}
Node* SLTErease(Node* head, int value) {
	assert(head);
	Node* tail = head;
	while (tail->next->data != value)
	{
		tail = tail->next;
	}

	Node* temp = tail->next->next;
	free(tail->next);
	tail->next = temp;
	return head;











}
