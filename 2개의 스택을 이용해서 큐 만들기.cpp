#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

typedef int element;
typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
}Stack;

//스택 초기화 함수
void init_stack(Stack* s) {
	s->top = -1;
}
//공백 상태 검출 함수
int is_empty(Stack* s) {
	return(s->top == -1);
}
//포화 상태 검출 함수
int is_full(Stack* s) {
	return(s->top == (MAX_STACK_SIZE - 1));
}
//삽입 함수
void push(Stack* s, element i) {
	if (is_full(s)) {
		printf("스택 포화\n");
		return;
	}
	else s->data[++(s->top)] = i;
}
//삭제 함수
element pop(Stack* s) {
	if (is_empty(s)) {
		printf("스택 공백\n");
	    exit(1);
	}
	else return s->data[(s->top)--];
}

int main(void) {
	Stack s1;
	Stack s2;
	int i = 0;

	init_stack(&s1);
	init_stack(&s2);

	char array[100];
	printf("숫자 작성 : ");
	scanf("%s", array);
	while (array[i] != 0) {   //숫자 넣기.
		push(&s1, (array[i]) - '0');
		i++;  
	}
	if (is_empty(&s2)) {
		while (!is_empty(&s1)) //s1이 안비어있다면
			push(&s2, pop(&s1)); // s1의 숫자를 s2로 넣어라.
	}
	while (!is_empty(&s2)) {
		printf("%d |", pop(&s2)); //s2가 안비어있다면 s2의 숫자를 꺼내라.
	}
	return 0;
}