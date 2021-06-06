/*PBL4 Q1*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int field[50][50], w, h;
//������ �迭 ��ġ Ž��
int vx[4] = { -1,1,0,0 }; // x�� ���� ������
int vy[4] = { 0,0,-1,1 }; // y�� ��,�Ʒ�

void dfs(int x, int y) {
    int nextX, nextY;
    field[x][y] = 0; //�湮 �Ϸ�
    
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
    scanf("%d", &n); // �׽�Ʈ ���̽� ���

    int num,x,y, cnt;
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &w, &h, &num); // ����,����,���߰���

        for(int i=0;i<num;i++) {
            scanf("%d %d", &x, &y);
            field[x][y] = 1;
        }//�迭 �Է� = ���� ��ġ �Է�

        cnt = 0;
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++) {
                if (field[i][j] == 1) {
                    dfs(i, j);
                    cnt++;
                }
            }
        }//���� Ȯ�� = ������ ���� ���ϱ�
        printf("������ ����: %d\n", cnt);
    }
    return 0;
}