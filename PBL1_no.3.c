/*�ڿ��� n�� ������ �� �ڸ� ���ڸ� ���ҷ� ������ �迭 ���·� �������ּ���.������� n�� 12345�̸�[5, 4, 3, 2, 1]�� �����մϴ�.
���� ����
n�� 10, 000, 000, 000������ �ڿ����Դϴ�.*/
#include <stdio.h>
#include <stdlib.h>

void main() {

	int len = 0; // �迭 ����
	long long n; // �Է¹��� �ڿ���
	printf("�ڿ����� �Է����ּ���: ");
	scanf_s("%lld", &n);

	int* list = (int*)malloc(12 * sizeof(int));

	while (n > 0) {
		len++;
		for (int i = len - 1; i < len; i++) {
			list[i] = n % 10; // �迭 �ۼ�
		}
		n /= 10;  // �迭 ���� ���ϱ� 
	}

	for (int i = 0; i < len; i++) {
		printf("%d ", list[i]);
	} // �迭 ���
	free(list);
}
