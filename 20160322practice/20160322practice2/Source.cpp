#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//���l��j�p

int main(void) {
	int money = 100;

	printf("���l�p�C��\n");
	printf("���a��l���B�� 100 ��\n");
	printf("�q���N�|�Y�X�T����l\n");
	printf("1 ~ 8 ���p,9 ~ 10 ����,11 ~ 18���j\n");
	printf("�߲v���O�� 2,10,2\n");
	srand(time(NULL));

	while (money > 0) {
		int num = 0;
		num += rand() % 6 + 1;
		num +=rand() % 6 + 1;
		num +=rand() % 6 + 1;

		char g;
		printf("�вq�����p�B���B�j�A�п�J(s/m/b):");
		scanf("%c", &g);

		int pmoney;
		printf("�ФU��`:");
		scanf("%d", &pmoney);

		switch (g) {
		case 's':
			if (num >= 1 && num <= 8) {
				printf("�A�q��F!\n");
				printf("��o�F%d\n", 2 * pmoney);
				money = pmoney * 2 + money;
				printf("�{�b���B��%d\n", money);
			}
			else {
				printf("�A�q���F\n");
				money = money - pmoney;
				printf("�A�鱼�F%d\n", pmoney);
				printf("�{�b���B��%d\n", money);
			}
			break;
		case 'm':
			if (num ==9 && num ==10) {
				printf("�A�q��F!\n");
				printf("��o�F%d\n", 10 * pmoney);
				money = pmoney * 10 + money;
				printf("�{�b���B��%d\n", money);
			}
			else {
				printf("�A�q���F\n");
				money = money - pmoney;
				printf("�A�鱼�F%d\n", pmoney);
				printf("�{�b���B��%d\n", money);
			}
			break;
		case 'b':
			if (num >= 11 && num <= 18) {
				printf("�A�q��F!\n");
				printf("��o�F%d\n", 2 * pmoney);
				money = pmoney * 2 + money;
				printf("�{�b���B��%d\n", money);
			}
			else {
				printf("�A�q���F\n");
				money = money - pmoney;
				printf("�A�鱼�F%d\n", pmoney);
				printf("�{�b���B��%d\n", money);
			}
			break;
		default:
			printf("�Ф��n�òq,�q���N�|���s\n");
			break;

		}

	}
	printf("�A����F�I\n");
	printf("�p��ɱ��A�j��˨�\n");
}