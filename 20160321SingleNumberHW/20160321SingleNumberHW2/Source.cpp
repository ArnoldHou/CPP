#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int money, year;
	float i;
	printf("�п�J����:\n");
	scanf("%d", &money);
	printf("�п�J�~�Q�v(��:0.02):\n");
	scanf("%f", &i);
	printf("�п�J�w�p�s�X�~:\n");
	scanf("%d", &year);
	printf("�C�~�Q����%.2f\n", money*i);
	printf("�L%d�~�᥻�Q�M��:%.2f\n", year, money + money*i*year);
}