//1번문제

#include <stdio.h>

int inRect(int x, int y, int tx1, int ty1, int tx2, int ty2);

void main(void) {

	int box[2][4], test;  //[번째 박스][첫점/끝점][x/y]

	for (int i = 0; i <= 1; i++) {
		printf("사각형_%d  x1 y1 x2 y2 순으로 입력하세요 : ", i+1);
		scanf("%d %d %d %d", &box[i][0], &box[i][1], &box[i][2], &box[i][3]);
	}

	for (int i = 0, x = 1; i <= 1; i++, x--) {
		test = 0;
		for (int j = 0; j <= 2; j = j + 2) {
			if (test != 1) {
				test = inRect(box[x][j], box[x][j + 1], box[i][0], box[i][1], box[i][2], box[i][3]);
			}
		}
	}

	if (test == 1) {
		printf("Overlap\n");
	}
	else {
		printf("NO overlap\n");
	}

}

int inRect(int x, int y, int tx1, int ty1, int tx2, int ty2) {
	if ((x >= tx1 && x <= tx2) && (y >= ty1 && y <= ty2)) {
		return 1;
	}
	else {
		return 0;
	}
}