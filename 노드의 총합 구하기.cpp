#define _CRT_SECURE_NO_WARNINGS            

#include<stdio.h>
#include<stdlib.h>

typedef int element;
typedef struct ListNode {  //리스트 노드 타입.
	element data;
	struct ListNode* link;
}ListNode;

ListNode* insert(ListNode* head, element value) {   //노드에 숫자 삽입. 
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->link = head;
	head = p;
	return head;
}

int sum(ListNode* head) {
	int sum = 0; //초기화.
	for (ListNode* p=head ; p != NULL; p = p->link) {
		sum += p->data;
	}
	return sum;
}


int main(void) {
	ListNode* head = NULL;
	int a, b;

	printf("노드의 개수 : ");
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		printf("노드 #%d 데이터 : ", i + 1);
		scanf("%d", &b);
		head = insert(head, b);
	}
	printf("연결 리스트의 데이터 합 : %d\n", sum(head));
	return 0;
}


