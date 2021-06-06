/*PBL3 Q5*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 50
#define TRUE 1;
int n, i;
int visited1[MAX];
int visited2[MAX];
int map[MAX][MAX];
void DFS(int x) {
	visited1[x] = TRUE;
	printf("%d ", x);//간선 출력
	for (int i = 1; i <= n; i++) {
		if (!visited1[i] && map[x][i] == 1) {
			DFS(i);
		}
	}
}
void BFS(int x) {
	int front = -1;
	int rear = -1;
	int queue[MAX * MAX];
	rear++;
	visited2[x] = TRUE;
	queue[rear] = x;
	while (front < rear) {
		front++;
		x = queue[front];
		printf("%d ", x);//간선 출력
		for (i = 1; i <= n; i++) {
			if (!visited2[i] && map[x][i] == 1) {
				rear++;
				visited2[i] = TRUE;
				queue[rear] = i;
			}
		}
	}
}
int main(void) {
	int n2, n3;//(정점 개수, 간선 개수, 탐색 시작 번호)
	int v1, v2;//(정점의 번호)

	scanf("%d %d %d", &n, &n2, &n3);
	for (int i = 0; i < n2; i++) {
		scanf("%d %d", &v1, &v2);
		map[v1][v2] = map[v2][v1] = TRUE; //양방향
	}
	DFS(n3);
	printf("\n");
	BFS(n3);
	return 0;
