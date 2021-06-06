/*PBL4 Q1*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int field[50][50], w, h;
//인접한 배열 위치 탐색
int vx[4] = { -1,1,0,0 }; // x축 왼쪽 오른쪽
int vy[4] = { 0,0,-1,1 }; // y축 위,아래

void dfs(int x, int y) {
    int nextX, nextY;
    field[x][y] = 0; //방문 완료
    
    for (int i= 0; i < 4; i++) {
        nextX = x + vx[i];
        nextY = y + vy[i];
        if (nextX >= 0 && nextX < w && nextY >= 0 && nextY < h)
            if (field[nextX][nextY] == 1)
                dfs(nextX, nextY);
    }
}

int main() {
    int n;
    scanf("%d", &n); // 테스트 케이스 경우

    int num,x,y, cnt;
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &w, &h, &num); // 가로,세로,배추개수

        for(int i=0;i<num;i++) {
            scanf("%d %d", &x, &y);
            field[x][y] = 1;
        }//배열 입력 = 배추 위치 입력

        cnt = 0;
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++) {
                if (field[i][j] == 1) {
                    dfs(i, j);
                    cnt++;
                }
            }
        }//인접 확인 = 지렁이 개수 구하기
        printf("지렁이 개수: %d\n", cnt);
    }
    return 0;
}