#include <stdio.h>

//3�� ����

void main(void) {

	long long iValue = 600851475143, iCount = 2;

	while (iCount < iValue) {   //iCount=2 ���� �ݺ�
		while (iValue % iCount == 0) { //iCount�� ������ ���������� Ȯ��
			iValue = iValue / iCount; //������ �������� iValue�� iCount�� ������ ����
		}        //���� ���� �� ������ ���������� �ݺ�Ȯ��!
		iCount++;      //���̻� ������ �������� ������ iCount�� 1�� ���ؼ� �ݺ�.
					   //�������� ����� ������ ���� ū ���� ����ū ���μ�.
	}

	printf("%u\n", iValue);

}
