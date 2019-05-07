#include <stdio.h>
//https://cafe.naver.com/kyonggieon/812 1번문제
void main(void) {

	int ivalue;

	printf("중간부분 별 개수(홀수만) : ");
	scanf("%d", &ivalue);

	for (int count1 = 0; count1 < ivalue; count1=count1+2) {			//중간부분 별 개수를 포함한 위부분 루프(별 개수 중심의 루프방식)
		for (int count2 = ivalue ; count2 > count1; count2=count2-2)	//공백 부분
			printf(" ");
		for (int count3 = 0; count3 <= count1; count3++)				//* 부분
			printf("*");
		printf("\n");
	}
	for (int count1 = ivalue-2 ; count1 > 1-2; count1=count1-2) {		//중간부분 별 개수를 제외한 밑부분 루프(별 개수 중심의 루프방식)
		for (int count2 = count1; count2 <= ivalue; count2=count2+2)	//공백 부분
			printf(" ");
		for (int count3 = count1; count3 > 0; count3 --)				//*부분
			printf("*");
		printf("\n");
	}

}
