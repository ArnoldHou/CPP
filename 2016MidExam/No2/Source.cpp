#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int winning_number[7];
	int guessing_number[7];

	for (int i = 1; i <= 7; i++) {
		printf("�п�J�}�����X (1~49) ");
		if (i == 7) {
			printf("(�S�O��):\n");
		}
		else {
			printf(": \n");
		}
		scanf("%d", &winning_number[i - 1]);

		for (int j = i - 1; j >= 0; j--) {
			while ((winning_number[i - 1] == winning_number[j - 1]) || (winning_number[i - 1]>49)) {
				printf("�Ʀr��J���~�A�Э��s��J�Ʀr:\n");
				scanf("%d", &winning_number[i - 1]);
			}
		}
	}
	puts("-----------------");
	for (int i = 1; i <= 7; i++) {
		printf("�п�J�ʶR���X (1~49) ");
		if (i == 7) {
			printf("(�S�O��):\n");
		}
		else {
			printf(": \n");
		}
		scanf("%d", &guessing_number[i - 1]);

		for (int j = i - 1; j >= 0; j--) {
			while ((guessing_number[i - 1] == guessing_number[j - 1]) || (guessing_number[i - 1]>49)) {
				printf("�Ʀr��J���~�A�Э��s��J�Ʀr:\n");
				scanf("%d", &guessing_number[i - 1]);
			}
		}
	}

	puts("�}�����X��:");
	for (int i = 1; i <= 7; i++) {
		if (i == 7) {
			printf("  �S�O��");
		}
		printf("%3d", winning_number[i-1]);
	}
	puts("\n-----------------");
	puts("�ʶR���X��:");
	for (int i = 1; i <= 7; i++) {
		if (i == 7) {
			printf("  �S�O��");
		}
		printf("%3d", guessing_number[i - 1]);
	}
	puts("\n-----------------");
	int counter = 0, s_counter = 0;

	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			if (winning_number[i - 1] == guessing_number[j - 1]) {
				counter++;
			}
		}
	}

	if (winning_number[6] == guessing_number[6]) {
		s_counter++;
	}

	if (counter == 6) {
		printf("�A���F�Y��\n");
	}
	else if (counter == 5 && s_counter == 1) {
		printf("�A���F�L��\n");
	}
	else if (counter == 5 ) {
		printf("�A���F�Ѽ�\n");
	}
	else if (counter == 4 && s_counter == 1) {
		printf("�A���F�v��\n");
	}
	else if (counter == 4) {
		printf("�A���F���\n");
	}
	else if (counter == 3 && s_counter == 1) {
		printf("�A���F�����A���������a��\n");
	}
	else if (counter == 2 && s_counter == 1) {
		printf("�A���F�m���A�������v�դ�\n");
	}
	else if (counter == 3 ) {
		printf("�A���F�ü��A�������v�դ�\n");
	}
	else {
		printf("�S����,Poor guys\n");
	}
	system("pause");
	return 0;
}