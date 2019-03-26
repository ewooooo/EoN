#include <stdio.h>

//5번 문제

void main(void) {

	int iValue = 1, iCount, test;

	while (1) {     //어느수까지 올라갈지 모르니 무한반복하며 iValue++.
		test = 1;
		for (iCount = 1; iCount <= 20; iCount++) { //1~20까지 반복
			if (iValue % iCount != 0) {    //1~20까지 한개라도 나누어떨어지지 않으면
				test = 0;       //test = 0 대입하고 반복종료
				break;
			}
		}
		if (test == 1) {  //모두 떨어지는 수가 생기면 while문 반복 종료
			break;
		}
		iValue++;
	}

	printf("%d\n", iValue);
}
