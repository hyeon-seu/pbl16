/*���Ҽ��� ����ü�� ǥ���غ���.
���Ҽ� a�� ���Ҽ� b�� �޾Ƽ� a + b�� ����ϴ� �Լ��� �ۼ��غ���.�Լ��� ����ü�� ��ȯ�� �� �ִ�.
�˴ٽ��� ���Ҽ��� ��real + imag * i���� ���� ���¸� ���´�.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct complex {
	double real;
	double imag;
}Com;

Com add(Com, Com);

int main(void) {
	double n1, n2, n3, n4;

	printf("ù ��° ���Ҽ��� �Է����ּ���:\n");
	printf("�Ǽ� �κ�: ");
	scanf_s("%lf", &n1);
	printf("��� �κ�: ");
	scanf_s("%lf", &n2);
	Com a = { n1,n2 };

	printf("�� ��° ���Ҽ��� �Է����ּ���:\n");
	printf("�Ǽ� �κ�: ");
	scanf_s("%lf", &n3);
	printf("��� �κ�: ");
	scanf_s("%lf", &n4);
	Com b = { n3, n4 };

	Com cadd;
	cadd = add(a, b);
	printf("�� ���Ҽ��� ���� ���� ");
	if (cadd.imag < 0)
		printf("%lf %lfi\n �̴�", cadd.real, cadd.imag); //ǥ���� �Ų����� �ϱ� ����
	else
		printf("%lf+%lfi\n �̴�", cadd.real, cadd.imag);

}

Com add(Com a, Com b) {
	Com add;
	add.real = a.real + b.real;
	add.imag = a.imag + b.imag;

	return add;
}
