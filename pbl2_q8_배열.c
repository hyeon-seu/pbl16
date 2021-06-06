/*pbl2 8�� �ߺ� ������ �������� ����*/
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
} // ���� �Լ�
int main(void) {
	int num;
	scanf("%d", &num);
	int data;
	int* a = (int*)malloc(sizeof(int) * num);
	int* b = (int*)malloc(sizeof(int) * num); //���� �޸� �Ҵ�

	for (int i = 0; i < num; i++) {
		scanf("%d", &data);
		a[i] = data;
	} //1.�迭 �Է�
	int j = 0;
	int len = 0; // �ߺ� ���ŵ� b �迭 ����
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
	}//2.�ߺ� ����

	selection_sort(b, len); // 3.����

	for (int i = 0; i < len; i++) {
		printf("%d ", b[i]);
	}//���
	free(a);
	free(b);
	return 0;
}
