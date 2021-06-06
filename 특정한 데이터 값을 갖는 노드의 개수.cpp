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

int search(ListNode* head, element value) {
	int num = 0;
	for (ListNode* p = head; p != NULL;p->link) {
		if (value == p->data)             //만약 입력한 값과 같은 값이 연결 리스트에 있다면
			num++;                       //숫자를 추가.
	}
	return num;
}
int main(void) {
	ListNode* head = NULL;
	int a, b, c;

	printf("노드의 개수 : ");
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		printf("노드 #%d 데이터 : ", i + 1);
		scanf("%d", &b);
		head = insert(head, b);
	}
	printf("탐색할 값을 입력하시오 : ");
	scanf("%d", &c);
	printf("%d는 연결 리스트에서 %d번 나타납니다.", c, search(head, c));

	return 0;
}


