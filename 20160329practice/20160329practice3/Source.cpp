#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"charge.h"

int main(void) {
	float hours;
	int ezcard = 100, visacard = 1000;
	printf("�п�J�H��ɶ�:");
	scanf("%f", &hours);
	printf("�O�ά� %.2f\n", (float)charge(hours));

	int chose;
	printf("�п�J�Ʀr��ܥI�ڤ覡:1.�y�C�d 2.visa�d 3.�{��\n");
	scanf("%d", &chose);


	int charge_1 = charge(hours);
	switch (chose)
	{
	case 1:
		printf("�d��Ū�����A���B��%d\n",ezcard);
		printf("���ڤ�\n");
		ezcard -= charge(hours);
		printf("�l�B�� %d ��\n", ezcard);
		break;
	case 2:
		printf("�d��Ū�����A���B��%d\n", visacard);
		if (visacard >= charge(hours)) {
			printf("���ڤ�\n");
			visacard -= charge(hours);
			printf("�l�B�� %d ��\n", visacard);
		}
		else {
			printf("�l�B�����A���ڥ���\n");
		}
		break;
	case 3:
		int cash;
		printf("�Ч�J�s��\n");
		printf("�п�J���B:");
		scanf("%d", &cash);
		charge_1 -= cash;
		while (charge_1 > 0){
			printf("�ٻݧ�J%d��\n", charge_1);
			printf("�п�J���B\n");
			scanf("%d", &cash);
			charge_1 -= cash;
		} 
		if (charge_1 < 0) {
			printf("��z%d��\n", -(charge_1));
		}
		break;
	default:
		break;
	}
	printf("���¥��{�A�w��U���A��\n");
}