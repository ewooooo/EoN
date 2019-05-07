#include <stdio.h>
#include <string.h>

//http://euler.synap.co.kr/prob_list.php 4번 문제

void main(void) {

	int iValue1, iValue2, tmp, iResult = 0, len, test, iCount;
	char cValue[10];

	for (iValue1 = 1; iValue1 < 1000; iValue1++) {
		for (iValue2 = 1; iValue2 < 1000; iValue2++) {
			tmp = iValue1 * iValue2;    //중첩 if문 사용하여 3자리*3자리 연산
			sprintf(cValue, "%d", tmp);    //연산한 값을 문자열로 변환하여 cValue 저장
			len = strlen(cValue);     //문자열 크기
			test = 1;
			for (iCount = 0; iCount < (len / 2); iCount++) {  //문자열의 길의 1/2 수 만큼 반복
				if (cValue[iCount] != cValue[len - (iCount + 1)]) { //문자열 배열의 위치를 이용하여 비교
					test = 0;
				}
			}
			if (test == 1) {   //대칭수면 1 아니면 0      
				if (tmp > iResult) { //현재 저장된 수보다 작은 대칭수는 저장하지 않는다.
					iResult = tmp;  //결과값에 대칭수 저장
				}
			}
		}
	}

	printf("%d\n", iResult);
}
