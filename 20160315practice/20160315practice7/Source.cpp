#include<stdlib.h>
#include<stdio.h>
#include<time.h>

//�׷��K�X

int main(void) {
	srand(time(NULL));
	int password = rand() %100 + 1;
	int input = 0;
	int max = 100, min = 0;
	printf("�׷��K�X\n");

	while (input != password) {
		printf("�ثe�d��G%d ~ %d\n",min,max);
		printf("�п�J�d�򤺥��@�Ʀr:");
		scanf("%d", &input);

		while (input < min || input >max) {
			printf("�Э��s��J�d�򤺼Ʀr:");
			scanf("%d", &input);
		}

		if (input > password) {
			max = input;
		}
		else  {
			min = input;
		}
	}

	printf("���ߧA�q���F�I\n");
}