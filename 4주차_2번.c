#include <stdio.h>

//https://cafe.naver.com/kyonggieon/829 2번문제

struct Stack
{
	int data[10];
	int index;
};

void Push(struct Stack *pStack);
void Pop(struct Stack *pStack);
void Show(struct Stack *pStack);

void main(void) {

	printf("========== 메뉴 =========\n");
	printf("PUSH : 1\n");
	printf("POP : 2\n");
	printf("SHOW : 3\n");
	printf("(종료 하려면 1,2,3 이외의 수 입력)\n\n");

	struct Stack Stack1 = { 0,0 };
	int sel = 1;	//배열 및 변수 선언 (시작시 모든 인덱스 해당값 0으로 초기화

	while (sel == 1 || sel == 2 || sel == 3) {		//1,2,3 이외의 입력시 프로그램 종료

		printf("메뉴를 선택하세요 : ");
		scanf("%d", &sel);

		switch (sel)
		{
		case 1:
			if (Stack1.index < 10) {
				Push(&Stack1);
			}
			else {
				printf("데이터 값 초과입니다.");
			}
			break;
		case 2:
			Pop(&Stack1);
			break;
		case 3:
			Show(&Stack1);
			break;
		default:
			printf("========= 스택 프로그램을 종료합니다 ==========\n");
		}
	}
}

void Push(struct Stack *pStack) {
	int iValue;
	printf("수 입력 : ");
	scanf("%d", &iValue);
	pStack->data[pStack->index] = iValue;		//현재 인덱스 값에 수를 입력 후 다음 인덱스로 위치 이동
	pStack->index++;
}

void Pop(struct Stack *pStack) {
	pStack->index--;
	pStack->data[pStack->index] = 0;			//직전 인덱스 위치로 이동후 값에 수를 0으로 초기화
}

void Show(struct Stack *pStack) {
	for (int i = 0; i <= 9; i++) {	//0으로 초기화된 값을 제외한 모든 값 출력
		if (pStack->data[i] != 0)
			printf("%d ", pStack->data[i]);
	}
	printf("\n");
}