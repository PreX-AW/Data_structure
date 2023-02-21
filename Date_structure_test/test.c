//




#include"SLT.h"

void test1() {
	SLTNode* plist = SLTCreate(10);

	SLTprint(plist);


}
void test2() {
	SLTNode* plist = SLTCreate(1);
	SLTPushBack(&plist);
	SLTprint(plist);
	SLTPopBack(&plist);
	SLTprint(plist);
}
void test3() {
	SLTNode* plist = SLTCreate(0);
	SLTPushFront(&plist);
	SLTprint(plist);
	SLTPopFront(&plist);
	SLTprint(plist);
}

int main() {

	//test1();
	//test2();
	//test3();






	return 0;
}