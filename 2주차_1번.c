#include <stdio.h>
//https://cafe.naver.com/kyonggieon/812 1������
void main(void) {

	int ivalue;

	printf("�߰��κ� �� ����(Ȧ����) : ");
	scanf("%d", &ivalue);

	for (int count1 = 0; count1 < ivalue; count1=count1+2) {			//�߰��κ� �� ������ ������ ���κ� ����(�� ���� �߽��� �������)
		for (int count2 = ivalue ; count2 > count1; count2=count2-2)	//���� �κ�
			printf(" ");
		for (int count3 = 0; count3 <= count1; count3++)				//* �κ�
			printf("*");
		printf("\n");
	}
	for (int count1 = ivalue-2 ; count1 > 1-2; count1=count1-2) {		//�߰��κ� �� ������ ������ �غκ� ����(�� ���� �߽��� �������)
		for (int count2 = count1; count2 <= ivalue; count2=count2+2)	//���� �κ�
			printf(" ");
		for (int count3 = count1; count3 > 0; count3 --)				//*�κ�
			printf("*");
		printf("\n");
	}

}
