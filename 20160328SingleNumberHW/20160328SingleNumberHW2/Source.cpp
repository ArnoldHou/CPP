#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int n1, n2, n3;
	printf("�Ф��O��J��^�Ʀ��Z(�ΪťհϹj):\n");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	int c;
	printf("�п�ܱ��U�Ӱʧ@(��J�Ʀr):1.�`�� 2.���� \n3.���ή��ؼ� 4.�̰��� 5.�̧C��:\n");
	scanf("%d", &c);

	int n = 0;

	switch (c) 
	{
	case 1: 
		printf("�`����%d\n", n1 + n2 + n3);
		break;
	case 2: 
		printf("������%.2f\n", (n1 + n2 + n3) / 3.0);
		break;
	case 3: 
		if (n1 < 60) {
			n++;
		}
		if (n2 < 60) {
			n++;
		}
		if (n3 < 60) {
			n++;
		}
		printf("���ή��ؼƬ�%d\n", n);
		break;
	case 4:
		if (n1 > n2 && n1 > n3) {
			printf("�̰�����%d\n", n1);
		}
		else if (n2>n1 && n2 > n3) {
			printf("�̰�����%d\n", n2);
		}
		else if (n3>n1 && n3 > n2) {
			printf("�̰�����%d\n", n3);
		}
		break;
	case 5:
		if (n1 < n2 && n1 < n3) {
			printf("�̧C����%d\n", n1);
		}
		else if (n2<n1 && n2 < n3) {
			printf("�̧C����%d\n", n2);
		}
		else if (n3<n1 && n3 < n2) {
			printf("�̧C����%d\n", n3);
		}
		break;
	default:
		printf("�ФŶÿ�J\n");
		break;
	}


}