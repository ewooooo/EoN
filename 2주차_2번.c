#include <stdio.h>

void main(void) {

	printf("========== �޴� =========\n");
	printf("PUSH : 1\n");
	printf("POP : 2\n");
	printf("SHOW : 3\n");
	printf("(���� �Ϸ��� 1,2,3 �̿��� �� �Է�)\n\n");

	int sel = 1, value, stack[10] = { 0 }, index = 0;	//�迭 �� ���� ���� (���۽� ��� �ε��� �ش簪 0���� �ʱ�ȭ

	while (sel == 1 || sel == 2 || sel == 3) {		//1,2,3 �̿��� �Է½� ���α׷� ����

		printf("�޴��� �����ϼ��� : ");
		scanf("%d", &sel);

		switch (sel)
		{
		case 1:
			printf("�� �Է� : ");
			scanf("%d", &value);
			stack[index] = value;		//���� �ε��� ���� ���� �Է� �� ���� �ε����� ��ġ �̵�
			index++;
			break;
		case 2:
			index--;
			stack[index] = 0;			//���� �ε��� ��ġ�� �̵��� ���� ���� 0���� �ʱ�ȭ
			break;
		case 3:
			for (int count = 0; count <= 9; count++) {	//0���� �ʱ�ȭ�� ���� ������ ��� �� ���
				if (stack[count] != 0)
					printf("%d ", stack[count]);
			}
			printf("\n");
			break;
		default:
			printf("========= ���� ���α׷��� �����մϴ� ==========\n");
		}

	}

}