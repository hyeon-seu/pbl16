/*����ó�� ���α׷��� �ۼ��Ѵٰ� ����.��������� �л��� �� �������� ����� ������  �����޸𸮸� �Ҵ��Ѵ�.
����ڷκ��� ������ �޾Ƽ� �����Ͽ��ٰ� �ٽ� ����Ѵ�.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* list;
	int stunum;

	printf("�л��� �� ���Դϱ�?:");
	scanf_s("%d", &stunum);

	list = (int*)malloc(stunum * sizeof(int));

	if (list == NULL) { //��ȯ����NULL�����˻�
		printf("�����޸��Ҵ����\n");
		exit(1);
	}

	for (int i = 0; i < stunum; i++) {
		printf("�л�%d ����:", i + 1);
		scanf_s("%d", &list[i]);
	}

	printf("===========���===========\n");

	for (int i = 0; i < stunum; i++) {
		printf("�л�%d ����:%d\n", i + 1, list[i]);
	}

	free(list);

	return 0;
}
