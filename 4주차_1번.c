#include <stdio.h>
#include <stdlib.h>


//������ ���� http://59.23.150.58/30stair/print/print.php?pname=print

struct data { // linked list
	int value;
	int test;
	struct data *next;
};


void main(void) {

	int allCount, setNum, timeValue = 0;

	printf("�Է� \n");
	scanf("%d %d", &allCount, &setNum);


	struct data *start = malloc(sizeof(struct data) * 1); //��������
	struct data *end = start;		//������

	for (int c = 0; c < allCount; c++) {
		int iValue;
		scanf("%d", &iValue);
		end->value = iValue;

		if (c == setNum) {
			end->test = 1;		//�˻��� ��° test���� 1 ����
		}
		else {
			end->test = 0;
		}
		if (c + 1 == allCount) {
			end->next = NULL;	//������ �������� ���̻� �����Ҵ� ��������.
		}
		else {
			end->next = malloc(sizeof(struct data) * 1);
			end = end->next;
		}
	}


	while (1) {
		struct data *testdata = start;
		int test = 0;
		int testValue = testdata->value;
		while (testdata != NULL) {
			if (testValue < testdata->value)
				test = 1;
			testdata = testdata->next;
		}

		if (test == 1) {				//�ڿ� ���� �켱������ ������
			end->next = start;			//�������� �������� ����
			start = start->next;		//�������� 2°�� �̵�
			end = end->next;			//������ �̵�
			end->next = NULL;			//���� ���������� ��°���� ����
		}
		else {							//����Ʈ ��½�
			timeValue++;				//�ѹ� ����Ʈ �ɶ����� �ð����� ++
			if (start->test == 1) {		//����Ʈ ��µ� ���� ���� �˻��Ϸ��� ������ �Ǻ�
				break;
			}
			else {
				struct data *del = start;	//������ ����� ���� ����
				start = start->next;		//�������� �̵�
				free(del);					//�����
			}
		}
	}
	printf("\n��� \n");
	printf("%d\n", timeValue);
}