#include<stdio.h>
#include<stdlib.h>

int main(void) {
	char name1[20], name2[20], name3[20];
	printf("�Ш̧ǿ�J�T�W�ǥͪ��W�r:(�ťդ��j)\n");
	scanf("%s %s %s", name1, name2, name3);

	int num1, num2, num3;
	printf("�Ш̧ǿ�J�T�W�ǥͪ����Z:\n");
	scanf("%d %d %d", &num1, &num2, &num3);

	while ((num1 < 0 || num1 > 100) || (num2 < 0 || num2 > 100) || (num3 < 0 || num3 > 100)) {
		printf("�Ш̧ǭ��s��J�T�W�ǥͪ����Z:\n");
		scanf("%d %d %d", &num1, &num2, &num3);
	}

	if (num1 > num2 && num1 > num3) {
		printf("�̰�����%s,���Ƭ�%d\n", name1, num1);
	}
	else if (num2 > num1 && num2 > num3) {
		printf("�̰�����%s,���Ƭ�%d\n", name2, num2);
	}
	else if (num3 > num1 && num3 > num1) {
		printf("�̰�����%s,���Ƭ�%d\n", name3, num3);
	}
	else if (num1 > num2 && num1 == num3) {
		printf("�̰�����%s,%s,���Ƭ�%d\n", name1, name3, num1);
	}
	else if (num1 > num3 && num1 == num2) {
		printf("�̰�����%s,%s,���Ƭ�%d\n", name1, name2, num1);
	}
	else if (num2 > num1 && num2 == num3) {
		printf("�̰�����%s,%s,���Ƭ�%d\n", name2, name3, num2);
	}
	else if (num2 > num3 && num2 == num1) {
		printf("�̰�����%s,%s,���Ƭ�%d\n", name2, name1, num2);
	}
	else if (num3 > num2 && num1 == num3) {
		printf("�̰�����%s,%s,���Ƭ�%d\n", name3, name1, num3);
	}
	else if (num3 > num1 && num2 == num3) {
		printf("�̰�����%s,%s,���Ƭ�%d\n", name3, name2, num3);
	}
	else {
		printf("�̰�����%s,%s,%s,���Ƭ�%d\n", name1, name2,name3,num1);
	}

}