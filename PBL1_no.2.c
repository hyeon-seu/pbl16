/*크기가 10인 배열 two[]를 선언하고 여기에 2의 제곱 값들을 저장해보자.
즉 배열의 첫 번째 요소에는 20을 저장하고 두 번째 요소에는 21값을 저장한다.마지막 요소에는 29값을 저장한다.
for 루프를 이용하여 two[]배열을 전체 요소의 값을 출력하는 프로그램을 작성하라.*/

#include <stdio.h>

int main(void) {
	int two[10];  //배열 선언                                                                        
	int r = 1;
	two[0] = 1;
	for (int i = 1; i < 10; i++) {
		r = r * 2;
		two[i] = r;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d", two[i]);
		printf(" ");
	}
}

