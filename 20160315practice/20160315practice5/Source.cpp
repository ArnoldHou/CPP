#include<stdio.h>
#include<stdlib.h>

//�E�E���k��

int main(void) {
	for (int x = 1; x <= 9; x++) {
		for (int y = 1; y <= 9; y++) {
			printf("%d*%d =%-2d   ", y, x, x*y);
			if (y == 9) {
				printf("\n");
			}
		}
	}
}