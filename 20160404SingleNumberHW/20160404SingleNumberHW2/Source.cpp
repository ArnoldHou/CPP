#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int num, factor, sum = 0;
	printf("�п�J�@�ӥ����:");
	scanf("%d", &num);
	printf("�p��%d�������ƥ]�t:", num);
	for (int i = 1; i <= num; i++) {
		factor = 0;
		for (int j = 1; j < i; j++) {
			if (i%j == 0) {
				factor += j;
			}
		}
		if (factor == i) {
			printf(" %d", i);
			sum += i;
		}

		
	}
	puts("");
	printf("�Ҧ������ƪ��`�X��:%d\n", sum);
}