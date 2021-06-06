/*pbl2 Q7-1 선택정렬로 오름차순 정리!*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))
void selection_sort(int list[], int n) {
	int i, j, least, temp;
	for (i = 0; i < n - 1; i++) {
		least = i;
		for (j = i + 1; j < n; j++)
			if (list[j] < list[least])
				least = j;
		SWAP(list[i], list[least], temp);
	}
}
int main(void) {
	int num; // 배열 입력 개수
	int data;
	int a[1000];
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &data);
		a[i] = data;
	}
	selection_sort(a, num);
	for (int i = 0; i < num; i++) {
		printf("%d\n", a[i]);
	}
}
