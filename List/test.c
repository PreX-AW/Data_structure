#include"List.h"
int main() {
	List* head = (List*)malloc(sizeof(List));
	ListInit(head);
	ListPushback(head, 1);
	ListPushback(head, 2);
	ListPushback(head, 3);
	ListPushback(head, 4);
	ListPushback(head, 5);


	ListPopback(head);
	ListPopback(head);
	ListPopback(head);
	ListPopback(head);
	ListPopback(head);


	ListPushFront(head, 5);
	ListPushFront(head, 4);
	ListPushFront(head, 3);
	ListPushFront(head, 2);
	ListPushFront(head, 1);
	ListPopFront(head);
	ListPopFront(head);
	ListPopFront(head);
	ListPopFront(head);
	ListPopFront(head);
	return 0;
}