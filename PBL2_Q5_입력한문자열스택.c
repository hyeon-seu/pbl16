/*pbl2 5번 문자열 출력 스택이용*/
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
		fprintf(stderr, "스택이 비어있음\n");
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
	printf("문자입력");

	while ((ch = getchar()) != '\n') //문자입력
	{
		push(&s1, ch);
	}
	printf("숫자입력");
	scanf("%d", &num); //숫자 입력
	for (int i = 0; i < num; i++)
	{
		scanf(" %c", &ch); //명령어 입력
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
