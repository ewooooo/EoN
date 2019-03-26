#include <stdio.h>

//3번 문제

void main(void) {

	long long iValue = 600851475143, iCount = 2;

	while (iCount < iValue) {   //iCount=2 부터 반복
		while (iValue % iCount == 0) { //iCount가 나누어 떨어지는지 확인
			iValue = iValue / iCount; //나누어 떨어지면 iValue를 iCount로 나누어 저장
		}        //작은 수가 또 나누어 떨어지는지 반복확인!
		iCount++;      //더이상 나누어 떨어지지 않으면 iCount의 1을 더해서 반복.
					   //마지막에 나우어 떨어진 가장 큰 수가 가장큰 소인수.
	}

	printf("%u\n", iValue);

}
