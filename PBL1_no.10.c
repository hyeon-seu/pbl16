/*�����̴� ����̸� ���ͼ� ���� �����ϴ� ���ε�, �ּ��ϰԵ� �׻� ���ž��� �����̴� ���� �Ǽ��� �߸� �θ��� ��� ġ�� �Ͼ�����.
�����̴� �߸��� ���� �θ� ������ 0�� ���ļ�, ���� �ֱٿ� ����̰� �� ���� ����� ��Ų��.
����̴� �̷��� ��� ���� �޾� ���� �� �� ���� ���� �˰� �;� �Ѵ�.����̸� ��������!*/



#include <stdio.h>
#include <stdlib.h>
int list[1000000];
int index = 0;
void push(int n);
void pop();

int main(void) {
	int n, money;
	int sum = 0;

	printf("�� �� �� �θ� �����ΰ���?: ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("%d��° �Է����ּ��� : ", i + 1);
		scanf_s("%d", &money);
		if (money == 0)
			pop();
		else
			push(money);
	} // ���� �Է�

	for (int i = 0; i < n; i++) {
		sum = sum + list[i];
	}
	printf("�հ�� %d�̴�", sum);
}

void push(int n) {
	list[index] = n;
	index++; // x ����
}
void pop() {
	index--; // ���� x�� ����
	list[index] = 0;
}
