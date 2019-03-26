#include <stdio.h>

//1번 문제
void main(void) {

	int iSum = 0, iCount;

	for (iCount = 1; iCount < 1000; iCount++) {  //iCount를 1부터 999까지 반복 증가한다.
		if (iCount % 3 == 0 || iCount % 5 == 0) { //iCount가 3이나 5로 나눴을 때 나머지가 0인(3,5의 배수)를 거른다,
			iSum = iSum + iCount;     //걸러진 숫자를 iSum의 더한다.
		}
	}
	printf("%d\n", iSum);

}