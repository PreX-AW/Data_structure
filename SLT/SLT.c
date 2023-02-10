#include"SLT.h"
Node* buySLT(int val)
{
	 Node* ptr = (Node*)malloc(sizeof( Node));
	 assert(ptr);
	 ptr->data = val;
	 ptr->next = NULL;
	 return ptr;

}
void SLTInit() {
	int i = 0;
	Node* head = NULL, *tail = NULL;
	for (; i < 10; i++) {
		if (head == NULL) {
			head = tail = buySLT(i);
		}
		else {
			tail = tail->data;
		}
	}


}
