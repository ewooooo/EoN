#include <stdio.h>

//https://cafe.naver.com/kyonggieon/812 ���ʽ�����
//���̼���

void main() {

	char inValue[30],c= 0;
	int data[30];
	scanf("%s", &inValue); //���ڴ�� ���ڷ� �Է��� ����

	while(inValue[c] != 0){
		data[c] = inValue[c] - '0';	//0�� �������� ���ڸ� ������ ��ȯ
		c++;
	}

	c = 0;
	int testdata = data[0], textCount = 1;	//������ �ɼ��� ī��Ʈ ����
	while (data[c] != 0) {
		c++;

		if (data[c] == testdata) {	//�ռ��ڿ� �ڼ��ڰ� ������ ī��Ʈ��
			textCount++;
		}
		else {		//�ռ��ڿ� �ڼ��ڰ� �ٸ��� ����Ʈ�ϰ� ���ؼ��ڷ� ����. ī��Ʈ �ʱ�ȭ
			printf("%d%d", testdata, textCount);
			testdata = data[c];
			textCount = 1;
		}
	}
	printf("\n");
}