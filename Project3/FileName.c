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
	// 두 버퍼를를 완전히 비우기
	for (int i = 0; i < ROW_MAX; i++) {
		for (int j = 0; j < COL_MAX; j++) {
			back_buf[i][j] = front_buf[i][j] = ' ';
		}
	}

	N_ROW = n_row;//행
	N_COL = n_col;//열
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
	printf("무");
	Sleep(500);
	printf("궁");
	Sleep(500);
	printf("화");
	Sleep(500);
	printf("꽃");
	Sleep(500);
	printf("이");
	Sleep(500);
	printf("피");
	Sleep(300);
	printf("었");
	Sleep(200);
	printf("습");
	Sleep(200);
	printf("니");
	Sleep(100);
	printf("다");
}
int main() {
	map_init(15, 40);
	draw();
	mugung();
}