/*9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최대값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.
예를 들어, 서로 다른 6개의 자연수
3, 29, 38, 12, 57, 74 이 주어지면, 이들 중 최댓값은 74이고, 이 값은 6번째 수이다.*/
#include <stdio.h>

int main() {
	int arr[6]; // 비교를 위한 배열 작성
	int num;
	printf("서로다른 자연수 6개를 입력해주세요\n");
	for (int i = 0; i < 6; i++) {
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (int i = 1; i < 6; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	printf("최대 값은 얼마인가??  ");
	printf("%d\n", max);
	for (int i = 0; i < 6; i++) {
		if (arr[i] == max) {
			num = i + 1;
			break;
		}
	}
	printf("최대값은 %d번째에 있다.", num);
}