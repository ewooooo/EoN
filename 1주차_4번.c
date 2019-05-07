#include <stdio.h>
#include <string.h>

//http://euler.synap.co.kr/prob_list.php 4�� ����

void main(void) {

	int iValue1, iValue2, tmp, iResult = 0, len, test, iCount;
	char cValue[10];

	for (iValue1 = 1; iValue1 < 1000; iValue1++) {
		for (iValue2 = 1; iValue2 < 1000; iValue2++) {
			tmp = iValue1 * iValue2;    //��ø if�� ����Ͽ� 3�ڸ�*3�ڸ� ����
			sprintf(cValue, "%d", tmp);    //������ ���� ���ڿ��� ��ȯ�Ͽ� cValue ����
			len = strlen(cValue);     //���ڿ� ũ��
			test = 1;
			for (iCount = 0; iCount < (len / 2); iCount++) {  //���ڿ��� ���� 1/2 �� ��ŭ �ݺ�
				if (cValue[iCount] != cValue[len - (iCount + 1)]) { //���ڿ� �迭�� ��ġ�� �̿��Ͽ� ��
					test = 0;
				}
			}
			if (test == 1) {   //��Ī���� 1 �ƴϸ� 0      
				if (tmp > iResult) { //���� ����� ������ ���� ��Ī���� �������� �ʴ´�.
					iResult = tmp;  //������� ��Ī�� ����
				}
			}
		}
	}

	printf("%d\n", iResult);
}
