#include <stdio.h>

//http://euler.synap.co.kr/prob_list.php 2������

void main(void) {

	int iValue1 = 1, iValue2 = 2, tmp, iSum = 0;

	//������ iVlaue2
	while (iValue2 <= 4000000) { //���� 4�鸸�� �Ǳ������� ����ݺ�����
		if (iValue2 % 2 == 0) {  //�������� ¦���̸� iSum�� ��
			iSum = iSum + iValue2;
		}
		tmp = iValue1 + iValue2; //�ٷ� ���� �װ� ���Ѱ��� tmp�� �ӽ����� 
		iValue1 = iValue2;   //���� �ݺ������� �������� iValue1 ����
		iValue2 = tmp;    //���� ���� �������� ����

	}

	printf("%d\n", iSum);

}
