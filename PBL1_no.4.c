/*복소수를 구조체로 표현해보자.
복소수 a와 복소수 b를 받아서 a + b를 계산하는 함수를 작성해보자.함수는 구조체를 반환할 수 있다.
알다시피 복소수는 “real + imag * i”와 같은 형태를 갖는다.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct complex {
	double real;
	double imag;
}Com;

Com add(Com, Com);

int main(void) {
	double n1, n2, n3, n4;

	printf("첫 번째 복소수를 입력해주세요:\n");
	printf("실수 부분: ");
	scanf_s("%lf", &n1);
	printf("허수 부분: ");
	scanf_s("%lf", &n2);
	Com a = { n1,n2 };

	printf("두 번째 복소수를 입력해주세요:\n");
	printf("실수 부분: ");
	scanf_s("%lf", &n3);
	printf("허수 부분: ");
	scanf_s("%lf", &n4);
	Com b = { n3, n4 };

	Com cadd;
	cadd = add(a, b);
	printf("두 복소수의 덧셈 값은 ");
	if (cadd.imag < 0)
		printf("%lf %lfi\n 이다", cadd.real, cadd.imag); //표현을 매끄럽게 하기 위해
	else
		printf("%lf+%lfi\n 이다", cadd.real, cadd.imag);

}

Com add(Com a, Com b) {
	Com add;
	add.real = a.real + b.real;
	add.imag = a.imag + b.imag;

	return add;
}
