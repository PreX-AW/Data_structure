#include"List.h"
void* ListInit(List* head) {
	assert(head);
	head->next = head;
	head->prev = head;
	head->val = 0;
	
}

void ListPushback(List* head, Datatype val) {
	assert(head);
	List* tail = head->prev;
	List* newNode = (List*)malloc(sizeof(List));
	assert(newNode);
	tail->next = newNode;
	newNode->prev = tail;
	newNode->next = head;
	head->prev = newNode;
	newNode->val = val;

}
void ListPopback(List* head) {
	assert(head);
	assert(head->next != head);
	List* tail = head->prev;
	tail->prev->next = head;
	head->prev = tail->prev;
	free(tail);
}

void ListPushFront(List* head, Datatype val) {
	assert(head);
	List* Phead = head->next;
	List* newNode = (List*)malloc(sizeof(List));
	assert(newNode);
	head->next = newNode;
	newNode->prev = head;
	newNode->next = Phead;
	Phead->prev = newNode;
	newNode->val = val;
}

void ListPopFront(List* head) {
	assert(head);
	assert(head->next != head);
	List* Phead = head->next;
	head->next = Phead->next;
	Phead->next->prev = head;
	free(Phead);
}


List* ListFind(List*head,Datatype val) {
	List* cur = head->next;
	while (cur != head) {
		if (cur->val == val)return cur;
		cur = cur->next;
	}
	return NULL;

}



void ListInsert(List* pos, Datatype val) {
	assert(pos);
	List* newNode = (List*)malloc(sizeof(List));
	assert(newNode);
	newNode->val = val;
	List* prev = pos->prev;
	newNode->prev = prev;
	prev->next = newNode;
	newNode->next = pos;
	pos->prev = newNode;

}
void ListErase(List* pos) {
	assert(pos);
	assert(pos->next != pos);
	pos->prev = pos->next;
	pos->next = pos->prev;
	free(pos);
}