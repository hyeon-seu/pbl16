/*1���� ������ �ִ� ũ�Ⱑ 20�� ���ڿ��� �̷���� ����ü�� ������ �� �ֵ��� ���� �޸𸮸� �Ҵ�ް�
���⿡ ���� 200�� ���ڿ� ��pbl 16 team���� ������ ����, ���� �޸𸮸� �ݳ��ϴ� ���α׷��� �ۼ��϶�.*/
#include <stdio.h>

typedef struct Team {
	char name[20]; // ���ڹ迭�� �� �̸�
	int num; // ������
}Team;

int main(void) {
	Team* a;
	a = (Team*)malloc(sizeof(Team));
	if (a == NULL) {
		fprintf(stderr, "�Ҵ� �Ұ��� !!\n");
		exit(1);
	}
	strcpy(a->name, "pbl 16 team");
	a->num = 200;
	printf("%d\n", a->num);
	printf(a->name);

	free(a);
	return 0;
}

