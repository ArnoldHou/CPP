#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int a, b, c, d;
	printf("�п�Ja,b,c,d�ӫ~�ʶR�ƶq(�ťդ��j):\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int sum = a * 1000 + b * 1500 + c * 900 + d * 2200;
	printf("�A�����B�� %d ��\n", sum);
	if (sum >= 17000) {
		printf("������o����:����\n");
	}
	else if (sum >= 14000 && sum < 17000) {
		printf("������o����:���ū�����\n");
	}
	else if (sum >= 12000 && sum < 14000) {
		printf("������o����:������J��\n");
	}
	else if (sum >= 10000 && sum < 12000) {
		printf("������o����:Lv �]�]\n");
	}
	else if (sum >= 8000 && sum < 10000) {
		printf("������o�ȼ�:�i��H�x����\n");
	}
	else if (sum >= 6000 && sum < 8000) {
		printf("������o�ɼ�:���իO�i�~\n");
	}
	else {
		printf("�S�����!\n");
	}
}