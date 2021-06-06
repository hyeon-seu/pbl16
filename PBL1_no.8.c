/*1개의 정수와 최대 크기가 20인 문자열로 이루어진 구조체를 저장할 수 있도록 동적 메모리를 할당받고
여기에 정수 200과 문자열 “pbl 16 team”을 저장한 다음, 동적 메모리를 반납하는 프로그램을 작성하라.*/
#include <stdio.h>

typedef struct Team {
	char name[20]; // 문자배열로 된 이름
	int num; // 정수값
}Team;

int main(void) {
	Team* a;
	a = (Team*)malloc(sizeof(Team));
	if (a == NULL) {
		fprintf(stderr, "할당 불가능 !!\n");
		exit(1);
	}
	strcpy(a->name, "pbl 16 team");
	a->num = 200;
	printf("%d\n", a->num);
	printf(a->name);

	free(a);
	return 0;
}

