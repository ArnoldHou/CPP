#include<stdio.h>
#include<stdlib.h>

int second(int h,int m,int s) {
	int sum = h * 60 * 60 + m * 60 + s;
	return 12 * 60 * 60 - sum;
}

int main(void) {
	int h, m, s;
	printf("�p��P�Q�G�I�t�X�� (��:��:��)(�Q�G�p�ɨ�):");
	scanf("%d:%d:%d", &h, &m, &s);
	printf("�t�F%d��\n", second(h, m, s));
}