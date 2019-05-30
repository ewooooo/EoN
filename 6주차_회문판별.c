#include <stdio.h>

int main() {
	printf("문자열 입력:");
	char buffer[100];
	scanf("%s", buffer);
	int str = strlen(buffer);
	char *sTest = (char*)malloc(sizeof(char) * (str));
	strcpy(sTest, buffer);
	
	int sel = 1;
	for (int i=0; i < str / 2; i++) {
		if (sTest[i] != sTest[str - i-1]) {
			sel = -1;
			break;
		}
	}
	printf("출력:");
	if (sel == 1) {
		printf("회문입니다.\n");
	}
	else {
		printf("회문이 아닙니다.\n");
	}
	return 0;
}