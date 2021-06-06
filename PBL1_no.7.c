/*성적처리 프로그램을 작성한다고 하자.사용자한테 학생이 몇 명인지를 물어보고 적절한  동적메모리를 할당한다.
사용자로부터 성적을 받아서 저장하였다가 다시 출력한다.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* list;
	int stunum;

	printf("학생은 몇 명입니까?:");
	scanf_s("%d", &stunum);

	list = (int*)malloc(stunum * sizeof(int));

	if (list == NULL) { //반환값이NULL인지검사
		printf("동적메모리할당오류\n");
		exit(1);
	}

	for (int i = 0; i < stunum; i++) {
		printf("학생%d 성적:", i + 1);
		scanf_s("%d", &list[i]);
	}

	printf("===========출력===========\n");

	for (int i = 0; i < stunum; i++) {
		printf("학생%d 성적:%d\n", i + 1, list[i]);
	}

	free(list);

	return 0;
}
