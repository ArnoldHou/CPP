#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//���l���v

int main(void) {
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num;
	srand(time(NULL));

	int i;
	printf("�п�J�p�⦸��:");
	scanf("%d", &i);

	for (int j = 1; j <= i; j++) {
		num = rand() % 6 + 1;

		switch (num) {
		case 1:
			num1 ++;
			break;
		case 2:
			num2 ++;
			break;
		case 3:
			num3 ++;
			break;
		case 4:
			num4 ++;
			break;
		case 5:
			num5 ++;
			break;
		case 6:
			num6 ++;
			break;
	}

	}

	printf("�X�{ 1 �����v�� %.3f\n", num1 / (float)i);
	printf("�X�{ 2 �����v�� %.3f\n", num2 / (float)i);
	printf("�X�{ 3 �����v�� %.3f\n", num3 / (float)i);
	printf("�X�{ 4 �����v�� %.3f\n", num4 / (float)i);
	printf("�X�{ 5 �����v�� %.3f\n", num5 / (float)i);
	printf("�X�{ 6 �����v�� %.3f\n", num6 / (float)i);
}