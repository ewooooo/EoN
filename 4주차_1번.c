#include <stdio.h>
#include <stdlib.h>


//프린터 문제 http://59.23.150.58/30stair/print/print.php?pname=print

struct data { // linked list
	int value;
	int test;
	struct data *next;
};


void main(void) {

	int allCount, setNum, timeValue = 0;

	printf("입력 \n");
	scanf("%d %d", &allCount, &setNum);


	struct data *start = malloc(sizeof(struct data) * 1); //시작지점
	struct data *end = start;		//끝지점

	for (int c = 0; c < allCount; c++) {
		int iValue;
		scanf("%d", &iValue);
		end->value = iValue;

		if (c == setNum) {
			end->test = 1;		//검사할 번째 test값에 1 대입
		}
		else {
			end->test = 0;
		}
		if (c + 1 == allCount) {
			end->next = NULL;	//마지막 지점에는 더이상 공강할당 하지않음.
		}
		else {
			end->next = malloc(sizeof(struct data) * 1);
			end = end->next;
		}
	}


	while (1) {
		struct data *testdata = start;
		int test = 0;
		int testValue = testdata->value;
		while (testdata != NULL) {
			if (testValue < testdata->value)
				test = 1;
			testdata = testdata->next;
		}

		if (test == 1) {				//뒤에 높은 우선순위가 있을시
			end->next = start;			//끝지점과 시작지점 연결
			start = start->next;		//시작지점 2째로 이동
			end = end->next;			//끝지점 이동
			end->next = NULL;			//원래 시작지점과 둘째지점 끊기
		}
		else {							//프린트 출력시
			timeValue++;				//한번 프린트 될때마다 시간변수 ++
			if (start->test == 1) {		//프린트 출력될 수가 내가 검사하려는 수인지 판별
				break;
			}
			else {
				struct data *del = start;	//공간을 지우기 위해 선언
				start = start->next;		//시작지점 이동
				free(del);					//지우기
			}
		}
	}
	printf("\n출력 \n");
	printf("%d\n", timeValue);
}