#include <stdio.h>

//1�� ����
void main(void) {

	int iSum = 0, iCount;

	for (iCount = 1; iCount < 1000; iCount++) {  //iCount�� 1���� 999���� �ݺ� �����Ѵ�.
		if (iCount % 3 == 0 || iCount % 5 == 0) { //iCount�� 3�̳� 5�� ������ �� �������� 0��(3,5�� ���)�� �Ÿ���,
			iSum = iSum + iCount;     //�ɷ��� ���ڸ� iSum�� ���Ѵ�.
		}
	}
	printf("%d\n", iSum);

}