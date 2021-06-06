/*pbl2 5�� ���ڿ� ��� �����̿�*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
typedef char element;
typedef struct StackNode {
	element data;
	struct StackNode* link;
}StackNode;
typedef struct {
	StackNode* top;
}LinkedSTackType;
void init(LinkedSTackType* s) {
	s->top = NULL;
}
int is_empty(LinkedSTackType* s) {
	return(s->top == NULL);
}
int is_full(LinkedSTackType* s) {
	return 0;
}
void push(LinkedSTackType* s, element item) {
	StackNode* temp = (StackNode*)malloc(sizeof(StackNode));
	temp->data = item;
	temp->link = s->top;
	s->top = temp;
}
element pop(LinkedSTackType* s) {
	if (is_empty(s)) {
		fprintf(stderr, "������ �������\n");
		exit(1);
	}
	else {
		StackNode* temp = s->top;
		element data = temp->data;
		s->top = s->top->link;
		free(temp);
		return data;
	}
}
void inputL(LinkedSTackType* s1, LinkedSTackType* s2) {
	if (!is_empty(s1)) {
		push(s2, pop(s1));
	}
}
void inputD(LinkedSTackType* s1, LinkedSTackType* s2) {
	if (!is_empty(s2)) {
		push(s1, pop(s2));
	}
}
void inputB(LinkedSTackType* s1) {
	if (!is_empty(s1)) {
		pop(s1);
	}
}
void inputP(LinkedSTackType* s1, element ch) {
	push(s1, ch);
}
int main(void)
{
	char ch, x;
	int num;
	LinkedSTackType s1;
	LinkedSTackType s2;
	init(&s1);
	init(&s2);
	printf("�����Է�");

	while ((ch = getchar()) != '\n') //�����Է�
	{
		push(&s1, ch);
	}
	printf("�����Է�");
	scanf("%d", &num); //���� �Է�
	for (int i = 0; i < num; i++)
	{
		scanf(" %c", &ch); //��ɾ� �Է�
		switch (ch)
		{
		case 'L':
			inputL(&s1, &s2);
			break;
		case 'D':
			inputD(&s1, &s2);
			break;
		case 'B':
			inputB(&s1);
			break;
		case 'P':
			scanf(" %c", &x);
			inputP(&s1, x);
			break;
		default:
			break;
		}
	}
	while (!is_empty(&s1))
		push(&s2, pop(&s1));
	while (!is_empty(&s2))
		printf("%c", pop(&s2));
	return 0;
}
