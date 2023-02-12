#include"SLT.h"
int main() {
	/*Node* head = SLTInit();

	print(head);
	SLTBackPush(head);
	print(head);
	SLTBackpop(head);
	print(head);
	head=SLTFrontPush(head);
	print(head);
	head=SLTFrontPop(head);
	print(head);
	head=SLTInsert(head, 5);
	print(head);
	head=SLTErease(head, 333333);
	print(head);*/






	Node*head=SLTCreat(10);

	print(head);
	SLTBackPush(&head);
	print(head);

	SLTBackpop(&head);
	print(head);

	SLTFrontPush(&head);
	print(head);
	SLTFrontPop(&head);
	print(head);
	SLTInsert_After(head, 4);
	print(head);
	SLTErease_After(head, 4);
	print(head);
	return 0;
}




