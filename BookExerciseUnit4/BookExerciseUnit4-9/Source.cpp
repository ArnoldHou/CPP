#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int num,num1, sum=0;
	printf("�X�ӼƦr�[�`:");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		printf("�Ʀr:");
		scanf("%d", &num1);
		sum += num1;
		printf("sum is %d\n", sum);
	}
}