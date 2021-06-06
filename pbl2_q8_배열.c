/*pbl2 8번 중복 삭제후 오름차순 정리*/
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
} // 정렬 함수
int main(void) {
	int num;
	scanf("%d", &num);
	int data;
	int* a = (int*)malloc(sizeof(int) * num);
	int* b = (int*)malloc(sizeof(int) * num); //동적 메모리 할당

	for (int i = 0; i < num; i++) {
		scanf("%d", &data);
		a[i] = data;
	} //1.배열 입력
	int j = 0;
	int len = 0; // 중복 제거된 b 배열 길이
	for (int i = 0; i < 5; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (b[j] == a[i])
				break;
		}
		if (j >= len)
		{
			b[j] = a[i];
			len++;
		}
	}//2.중복 제거

	selection_sort(b, len); // 3.정렬

	for (int i = 0; i < len; i++) {
		printf("%d ", b[i]);
	}//출력
	free(a);
	free(b);
	return 0;
}
