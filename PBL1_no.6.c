/*MALLOC.C: malloc�� �̿��Ͽ� ���� 20�� ������ �� �ִ� ���� �޸𸮸� �Ҵ��ϰ� free�� �̿��Ͽ� �޸𸮸� �ݳ��϶�.*/


#define SIZE 20
int main(void)
{
	int* p;

	p = (int*)malloc(SIZE * sizeof(int));
	if (p == NULL) {
		fprintf(stderr, "�޸𸮰� �����ؼ� �Ҵ� �Ұ���!!\n");
		exit(1);
	}

	for (int i = 0; i < SIZE; i++)
		p[i] = i;

	for (int i = 0; i < SIZE; i++)
		printf("%d ", p[i]);

	free(p);
	return 0;
}