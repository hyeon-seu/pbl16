/*pbl2 Q7-1 �������ķ� �������� ����!*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void insertion_sort(int list[], int n) {
	int i, j, key;
	for (i = 0; i < n; i++) {
		key = list[i];
		for (j = i - 1; j >= 0 && list[j] > key; j--)
			list[j + 1] = list[j];
		list[j + 1] = key;
	}
}
int main(void) {
	int num; // �迭 �Է� ����
	int data;
	int a[1000];
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &data);
		a[i] = data;
	}
	insertion_sort(a, num);
	for (int i = 0; i < num; i++) {
		printf("%d\n", a[i]);
	}
}
