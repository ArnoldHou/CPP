#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int num;
	printf("�п�J�@�ӥ|���:");
	scanf("%d", &num);
	while (num <= 0 || num >= 9999) {
		printf("�Э��s��J�@�ӥ|���:");
		scanf("%d", num);
	}
	int n1,n2,n3,n4;
	n4 = num % 10;
	n3 = (num % 100 - n4)/10;
	n2 = (num % 1000 - n3 * 10 - n4)/100;
	n1 = (num  - n2 * 100 - n3 * 10 - n4)/1000;

	printf("�d��Ƭ�:%d\n", n1);
	printf("�ʦ�Ƭ�:%d\n", n2);
	printf("�Q��Ƭ�:%d\n", n3);
	printf("�Ӧ�Ƭ�:%d\n", n4);

	printf("�s�Ʀr��:%d%d%d%d", n4, n3, n2, n1);
}