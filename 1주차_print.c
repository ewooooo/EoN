#include <stdio.h>
#include <stdlib.h>


//������ ���� http://59.23.150.58/30stair/print/print.php?pname=print

void main(void) {

	int allCount, setNum, tmp[2], timeValue = 0 ,test;
	int **data;

	printf("�Է� \n");
	scanf("%d %d", &allCount, &setNum);

	data = (int**)malloc(sizeof(int*) * allCount); //���� �Ҵ�

	for (int c = 0; c < allCount; c++) {
		data[c] = (int*)malloc(sizeof(int) * 2); // n*2 �迭 �����Ҵ�
		scanf("%d", &data[c][0]);
		if (c == setNum) {
			data[c][1] = 1;		//�˻��� ��° ���� �迭[1]���� 1�� ����.
		}
		else {
			data[c][1] = 0;
		}
	}

	while(1){	//�ý��� ���ѷ���
		test = 0;
		for (int c = 1; c < allCount; c++) {  //�ڿ� �켱������ ������ �˻�
			if (data[0][0] < data[c][0]) {
				test = 1;					// ������ 1
				break;
			}
		}
		if (test == 1) {				//�ڿ� ���� �켱������ ������
			tmp[0] = data[0][0];		//ù ���� �ǵ��� �ڸ��� �ű�� ������ �����
			tmp[1] = data[0][1];
			for (int c = 0; c < allCount-1; c++) {
				data[c][0] = data[c + 1][0];
				data[c][1] = data[c + 1][1];
			}
			data[allCount - 1][0] = tmp[0];
			data[allCount - 1][1] = tmp[1];
		}else {							//����Ʈ ��½�
			timeValue++;				//�ѹ� ����Ʈ �ɶ����� �ð����� ++
			if (data[0][1] == 1) {		//����Ʈ ��µ� ���� ���� �˻��Ϸ��� ������ �Ǻ�
				break;
			}
			for (int c = 0; c < allCount-1; c++) {		//�ڼ��� �����ζ���� ������ ���� 0���� ���
				data[c][0] = data[c + 1][0];
				data[c][1] = data[c + 1][1];
			}
			data[allCount - 1][0] = 0;
			data[allCount - 1][1] = 0;

		}

	}

	printf("\n��� \n");
	printf("%d\n", timeValue);

}