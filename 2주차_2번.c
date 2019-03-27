#include <stdio.h>

void main(void) {

	printf("========== 메뉴 =========\n");
	printf("PUSH : 1\n");
	printf("POP : 2\n");
	printf("SHOW : 3\n");
	printf("(종료 하려면 1,2,3 이외의 수 입력)\n\n");

	int sel = 1, value, stack[10] = { 0 }, index = 0;	//배열 및 변수 선언 (시작시 모든 인덱스 해당값 0으로 초기화

	while (sel == 1 || sel == 2 || sel == 3) {		//1,2,3 이외의 입력시 프로그램 종료

		printf("메뉴를 선택하세요 : ");
		scanf("%d", &sel);

		switch (sel)
		{
		case 1:
			printf("수 입력 : ");
			scanf("%d", &value);
			stack[index] = value;		//현재 인덱스 값에 수를 입력 후 다음 인덱스로 위치 이동
			index++;
			break;
		case 2:
			index--;
			stack[index] = 0;			//직전 인덱스 위치로 이동후 값에 수를 0으로 초기화
			break;
		case 3:
			for (int count = 0; count <= 9; count++) {	//0으로 초기화된 값을 제외한 모든 값 출력
				if (stack[count] != 0)
					printf("%d ", stack[count]);
			}
			printf("\n");
			break;
		default:
			printf("========= 스택 프로그램을 종료합니다 ==========\n");
		}

	}

}