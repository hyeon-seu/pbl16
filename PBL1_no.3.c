/*자연수 n을 뒤집어 각 자리 숫자를 원소로 가지는 배열 형태로 리턴해주세요.예를들어 n이 12345이면[5, 4, 3, 2, 1]을 리턴합니다.
제한 조건
n은 10, 000, 000, 000이하인 자연수입니다.*/
#include <stdio.h>
#include <stdlib.h>

void main() {

	int len = 0; // 배열 길이
	long long n; // 입력받은 자연수
	printf("자연수를 입력해주세요: ");
	scanf_s("%lld", &n);

	int* list = (int*)malloc(12 * sizeof(int));

	while (n > 0) {
		len++;
		for (int i = len - 1; i < len; i++) {
			list[i] = n % 10; // 배열 작성
		}
		n /= 10;  // 배열 길이 구하기 
	}

	for (int i = 0; i < len; i++) {
		printf("%d ", list[i]);
	} // 배열 출력
	free(list);
}
