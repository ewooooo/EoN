#include <stdio.h>
#include <stdlib.h>


//프린터 문제 http://59.23.150.58/30stair/print/print.php?pname=print

void main(void) {

	int allCount, setNum, tmp[2], timeValue = 0 ,test;
	int **data;

	printf("입력 \n");
	scanf("%d %d", &allCount, &setNum);

	data = (int**)malloc(sizeof(int*) * allCount); //동적 할당

	for (int c = 0; c < allCount; c++) {
		data[c] = (int*)malloc(sizeof(int) * 2); // n*2 배열 동적할당
		scanf("%d", &data[c][0]);
		if (c == setNum) {
			data[c][1] = 1;		//검사할 번째 수의 배열[1]값의 1을 대입.
		}
		else {
			data[c][1] = 0;
		}
	}

	while(1){	//시스템 무한루프
		test = 0;
		for (int c = 1; c < allCount; c++) {  //뒤에 우선순위가 높은지 검사
			if (data[0][0] < data[c][0]) {
				test = 1;					// 높으면 1
				break;
			}
		}
		if (test == 1) {				//뒤에 높은 우선순위가 있을시
			tmp[0] = data[0][0];		//첫 수를 맨뒤의 자리로 옮기고 앞으로 떙기기
			tmp[1] = data[0][1];
			for (int c = 0; c < allCount-1; c++) {
				data[c][0] = data[c + 1][0];
				data[c][1] = data[c + 1][1];
			}
			data[allCount - 1][0] = tmp[0];
			data[allCount - 1][1] = tmp[1];
		}else {							//프린트 출력시
			timeValue++;				//한번 프린트 될때마다 시간변수 ++
			if (data[0][1] == 1) {		//프린트 출력될 수가 내가 검사하려는 수인지 판별
				break;
			}
			for (int c = 0; c < allCount-1; c++) {		//뒤수를 앞으로땡기고 마지막 수를 0으로 비움
				data[c][0] = data[c + 1][0];
				data[c][1] = data[c + 1][1];
			}
			data[allCount - 1][0] = 0;
			data[allCount - 1][1] = 0;

		}

	}

	printf("\n출력 \n");
	printf("%d\n", timeValue);

}