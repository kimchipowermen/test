#include <stdio.h>
#include <stdlib.h>
#include<Windows.h>

#define ROW_MAX		40
#define COL_MAX		80

int N_ROW, N_COL;
char map[10][20];

char front_buf[ROW_MAX][COL_MAX];
char back_buf[ROW_MAX][COL_MAX];

void draw();

void map_init(int n_row, int n_col) {
	// �� ���۸��� ������ ����
	for (int i = 0; i < ROW_MAX; i++) {
		for (int j = 0; j < COL_MAX; j++) {
			back_buf[i][j] = front_buf[i][j] = ' ';
		}
	}

	N_ROW = n_row;//��
	N_COL = n_col;//��
	for (int i = 0; i < N_ROW; i++) {
		for (int j = 0; j < N_COL; j++) {
			if (i == 0 || i == N_ROW - 1 || j == 0 || j == N_COL - 1) {
				back_buf[i][j] = '#';
			}
			else {
				back_buf[i][j] = ' ';
			}
		}
	}
}

void draw(void) {
	system("cls");
	for (int i = 0; i < N_ROW; i++) {
		for (int j = 0; j < N_COL; j++) {
			printf("%c", back_buf[i][j]);
		}printf("\n"); 
	}
}
void mugung(void) {
	printf("��");
	Sleep(500);
	printf("��");
	Sleep(500);
	printf("ȭ");
	Sleep(500);
	printf("��");
	Sleep(500);
	printf("��");
	Sleep(500);
	printf("��");
	Sleep(300);
	printf("��");
	Sleep(200);
	printf("��");
	Sleep(200);
	printf("��");
	Sleep(100);
	printf("��");
}
int main() {
	map_init(15, 40);
	draw();
	mugung();
}