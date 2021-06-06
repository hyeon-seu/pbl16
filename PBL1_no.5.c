/*크기가 n인 배열 array에서 임의의 위치 loc에 정수 value를 삽입하는 함수 insert()를 작성하라.
정수가 삽입되면 그 뒤에 있는 정수 들은 한 칸씩 뒤로 밀려야 한다.현재 배열에 들어있는 원소의 개수는 items개라고 하자 .*/

#include<stdio.h>
#define SIZE 10
#define ITEMS 5

int insert(int array[], int loc, int value) {
	for (int i = SIZE - 1; i > loc; i--) {
		array[i] = array[i - 1];
	}

	array[loc] = value;
	return 0;
}

void sh(int array[]) {
	for (int i = 0; i < SIZE; i++) {
		printf("%d", array[i]);
	}

}

int main(void) {
	int array[SIZE] = { 0 };// 초기화 시킨다
	for (int i = 0; i < ITEMS; i++) {
		array[i] = i;
	}

	printf("insert 하기 전 배열\n");
	sh(array);

	insert(array, 2, 16);
	printf("\n");

	printf("insert 한 후 배열\n");
	sh(array);

	return 0;
}
