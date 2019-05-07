#include <stdio.h>

//https://cafe.naver.com/kyonggieon/812 보너스문제
//개미수열

void main() {

	char inValue[30],c= 0;
	int data[30];
	scanf("%s", &inValue); //숫자대신 문자로 입력을 받음

	while(inValue[c] != 0){
		data[c] = inValue[c] - '0';	//0이 나오기전 숫자를 정수로 변환
		c++;
	}

	c = 0;
	int testdata = data[0], textCount = 1;	//기준이 될수와 카운트 선언
	while (data[c] != 0) {
		c++;

		if (data[c] == testdata) {	//앞숫자와 뒤숫자가 같으면 카운트업
			textCount++;
		}
		else {		//앞숫자와 뒤숫자가 다르면 프린트하고 기준숫자로 잡음. 카운트 초기화
			printf("%d%d", testdata, textCount);
			testdata = data[c];
			textCount = 1;
		}
	}
	printf("\n");
}