#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	int pass, start = 1, end = 1000, guess;
	int counter=0;
	srand(time(NULL));
	pass = rand() % 1000 + 1;
	do {
		printf("�п�J�Ʀr(%d~%d),��J0���:",start,end);
		scanf("%d", &guess);
		if (guess == 0) {
			printf("�A���F!\n");
			break;
		}
		while (guess > end || guess < start) {
			printf("��J���~�A�Э��s��J�Ʀr(%d~%d),��J0���:", start, end);
			scanf("%d", &guess);
			if (guess == 0) {
				break;
			}
		}
		if (guess == 0) {
			printf("�A���F!\n");
			break;
		}
		if (guess > pass) {
			end = guess;
		}
		else {
			start = guess;
		}
		counter++;
		if (pass == guess) {
			printf("����F!\n");
		}
	} while (pass != guess);
	printf("�A�`�@�q�F%d��\n", counter);
}