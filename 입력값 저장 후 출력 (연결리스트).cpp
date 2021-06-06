#define _CRT_SECURE_NO_WARNINGS            

#include<stdio.h>
#include<stdlib.h>

typedef int element;
typedef struct ListNode {  //리스트 노드 타입.
	element data;
	struct ListNode* link;
}ListNode;

ListNode* insert(ListNode* head, element value) {   //리스트노드 마지막에 숫자 삽입. 
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->link = NULL;
	if (head == NULL) {
		p->link = head;
		head = p;
	}
	else {
		ListNode* last = head;
		while (last->link != NULL)
			last = last->link;
		last->link = p;
	}

	return head;
}

void list_print(ListNode* head) {
	ListNode* p = head;
	while (p != NULL) {
		printf("%d->", p->data); //노드의 값 출력.
		p = p->link;  //다음 노드의 위치로 이동.
	}
	printf("\n");
}
int main(void) {
	ListNode* head = NULL;
	int a;
	int b;
	printf("노드의 개수 : ");
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		printf("노드 #%d 데이터 : ", i+1);
		scanf("%d", &b);
		head = insert(head, b);
	}
	printf("생성된 연결 리스트");
	list_print(head);
	return 0;
}


