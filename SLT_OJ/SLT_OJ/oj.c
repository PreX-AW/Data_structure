#include"oj.h"
Node* buyNode(int val) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	assert(newNode);
	newNode->val = val;
	newNode->next = NULL;
	return newNode;
}


Node* creatSLT(int arr[], int size) {
	Node* head = NULL, * tail = NULL;
	for (int i = 0; i < size; i++) {
		Node* newNode = buyNode(arr[i]);
		if (NULL == head) {
			head = tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = tail->next;
		}

	}
	return head;

}