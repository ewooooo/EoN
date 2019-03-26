#include <stdio.h>

void main(void) {

	int ivalue;

	printf("중간부분 별 개수(홀수만) : ");
	scanf("%d", &ivalue);

	for (int count1 = 0; count1 < ivalue; count1=count1+2) {
		for (int count2 = ivalue ; count2 > count1; count2=count2-2)
			printf(" ");
		for (int count3 = 0; count3 <= count1; count3++)
			printf("*");
		printf("\n");
	}
	for (int count1 = ivalue-2 ; count1 > 1-2; count1=count1-2) {
		for (int count2 = count1; count2 <= ivalue; count2=count2+2)
			printf(" ");
		for (int count3 = count1; count3 > 0; count3 --)
			printf("*");
		printf("\n");
	}

}
