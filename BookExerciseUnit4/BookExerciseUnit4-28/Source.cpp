#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int type;
	while (1) {
		printf("�п�J�p�����O(-1 to end):1.�g�z�H�� 2.�p�ɤH�� 3.������u 4.�s�u ");
		scanf("%d", &type);
		if (type == -1) {
			break;
		}
		switch (type)
		{
		case 1:
			float salary;
			printf("�A���g�z�H��\n");
			printf("�п�J�C�g�u��:");
			scanf("%f", &salary);
			printf("���g�~�ꬰ: %.2f\n", salary);
			puts("");
			break;
		case 2:
			int hours;
			float wage;
			printf("�A���p�ɤH��\n");
			printf("�п�J���g�W�Z�ɼ�:");
			scanf("%d", &hours);
			printf("�п�J�C�p�ɤu��:");
			scanf("%f", &wage);
			if (hours > 40) {
				printf("���g�~�ꬰ:%.2f\n", wage * 40.0 + wage*1.5*(hours - 40.0));
			}
			else {
				printf("���g�~�ꬰ:%.2f\n", wage * 40.0 );
			}
			puts("");
			break;
		case 3:
			float sales;
			printf("�A��������u\n");
			printf("�п�J���g�P����B:");
			scanf("%f", &sales);
			printf("���g�~�ꬰ:%.2f", 250 + sales*0.057);
			puts("");
			break;
		case 4:
			int num;
			float money;
			printf("�A���s�u\n");
			printf("�п�J���g�Ͳ����~�Ӽ�:");
			scanf("%d", &num);
			printf("�п�J�C��u��:");
			scanf("%f", &money);
			printf("���g�~�ꬰ:%.2f", num*money);
			puts("");
		default:
			puts("");
			break;
		}
	}

}