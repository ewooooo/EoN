#include <stdio.h>

//http://euler.synap.co.kr/prob_list.php 2번문제

void main(void) {

	int iValue1 = 1, iValue2 = 2, tmp, iSum = 0;

	//기준항 iVlaue2
	while (iValue2 <= 4000000) { //항이 4백만이 되기전까지 문장반복실행
		if (iValue2 % 2 == 0) {  //현재항이 짝수이면 iSum의 합
			iSum = iSum + iValue2;
		}
		tmp = iValue1 + iValue2; //바로 앞의 항과 더한값을 tmp의 임시저장 
		iValue1 = iValue2;   //다음 반복을위해 현재항을 iValue1 대입
		iValue2 = tmp;    //더한 값을 현재항의 저장

	}

	printf("%d\n", iSum);

}
