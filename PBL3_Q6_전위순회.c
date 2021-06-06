#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n, index, post[10000], inorderindex[10000];
void preorder(int postS, int postRt, int inS, int inR) {
	int root = post[postRt];
	printf("%d ", root);
	int lcnt = inorderindex[root] - inS - 1;
	if (inorderindex[root] != inS)
		preorder(postS, postS + lcnt, inS, inorderindex[root] - 1);
	if (inorderindex[root] != inR)
		preorder(postS + lcnt + 1, postRt - 1, inorderindex[root] + 1, inR);
}
int main(void) {
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &index);
		inorderindex[index] = i;
	}//중위 인덱스 저장
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &post[i]);
	}//후위
	preorder(0, n - 1, 0, n - 1);
}
