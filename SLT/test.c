#include"SLT.h"
int main() {
	Node* head = SLTInit();

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
	print(head);
	return 0;
}




