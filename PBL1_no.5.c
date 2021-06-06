/*ũ�Ⱑ n�� �迭 array���� ������ ��ġ loc�� ���� value�� �����ϴ� �Լ� insert()�� �ۼ��϶�.
������ ���ԵǸ� �� �ڿ� �ִ� ���� ���� �� ĭ�� �ڷ� �з��� �Ѵ�.���� �迭�� ����ִ� ������ ������ items����� ���� .*/

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
	int array[SIZE] = { 0 };// �ʱ�ȭ ��Ų��
	for (int i = 0; i < ITEMS; i++) {
		array[i] = i;
	}

	printf("insert �ϱ� �� �迭\n");
	sh(array);

	insert(array, 2, 16);
	printf("\n");

	printf("insert �� �� �迭\n");
	sh(array);

	return 0;
}
