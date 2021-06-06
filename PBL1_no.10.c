/*재현이는 재민이를 도와서 돈을 관리하는 중인데, 애석하게도 항상 정신없는 재현이는 돈을 실수로 잘못 부르는 사고를 치기 일쑤였다.
재현이는 잘못된 수를 부를 때마다 0을 외쳐서, 가장 최근에 재민이가 쓴 수를 지우게 시킨다.
재민이는 이렇게 모든 수를 받아 적은 후 그 수의 합을 알고 싶어 한다.재민이를 도와주자!*/



#include <stdio.h>
#include <stdlib.h>
int list[1000000];
int index = 0;
void push(int n);
void pop();

int main(void) {
	int n, money;
	int sum = 0;

	printf("총 몇 번 부를 예정인가요?: ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("%d번째 입력해주세요 : ", i + 1);
		scanf_s("%d", &money);
		if (money == 0)
			pop();
		else
			push(money);
	} // 스택 입력

	for (int i = 0; i < n; i++) {
		sum = sum + list[i];
	}
	printf("합계는 %d이다", sum);
}

void push(int n) {
	list[index] = n;
	index++; // x 증가
}
void pop() {
	index--; // 먼저 x값 감소
	list[index] = 0;
}
