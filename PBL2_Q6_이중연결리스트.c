/*pbl2 q6 이중연결리스트 탐색함수 작성! 3가지 방법을 사용해보았다*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef int element;
typedef struct DlistNode {
	element data;
	struct DlistNode* llink;
	struct DlistNode* rlink;
}DlistNode;

void init(DlistNode* phead) {
	phead->llink = phead;
	phead->rlink = phead;
}

void dinsert(DlistNode* before, element data) {
	DlistNode* newnode = (DlistNode*)malloc(sizeof(DlistNode));
	newnode->data = data;
	newnode->llink = before;
	newnode->rlink = before->rlink;
	before->rlink->llink = newnode;
	before->rlink = newnode;
}

DlistNode* search(DlistNode* head, element data) {
	DlistNode* p = head;
	while (p != NULL) {
		if (p->data == data)
			return p;
		p = p->rlink;
	}
	return NULL;
}
int main(void) {
	DlistNode* head = (DlistNode*)malloc(sizeof(DlistNode));
	int num, data;
	init(head);

	printf("데이터 개수를 입력하시오: ");
	
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		printf("노드 %d 데이터를 입력하시오: ");
		scanf("%d", &data);
		dinster(head, data);
	}
	if (serach(head, 33) != NULL) {
		printf("값이 있습니다");
	}
	else
		printf("값이 없습니다");

	free(head);
	return 0;
}
/*DlistNode* search(DlistNode* head, element data) {
	DlistNode* p = head;
	do {
		if (p->data == data)
			return p;
		p = p->rlink;
	} while (p != head);
	return NULL;
}case2 */
/*DlistNode* search(DlistNode* head, element data)
{
	DlistNode* p;
	for (p = head->rlink; p != head; p = p->rlink)
	{
		if (p->data == data)
			return p;
	}
	return NULL;
}case3 */