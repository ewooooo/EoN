#include <stdio.h>

//5�� ����

void main(void) {

	int iValue = 1, iCount, test;

	while (1) {     //��������� �ö��� �𸣴� ���ѹݺ��ϸ� iValue++.
		test = 1;
		for (iCount = 1; iCount <= 20; iCount++) { //1~20���� �ݺ�
			if (iValue % iCount != 0) {    //1~20���� �Ѱ��� ����������� ������
				test = 0;       //test = 0 �����ϰ� �ݺ�����
				break;
			}
		}
		if (test == 1) {  //��� �������� ���� ����� while�� �ݺ� ����
			break;
		}
		iValue++;
	}

	printf("%d\n", iValue);
}
