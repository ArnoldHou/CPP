#include<stdio.h>
#include<stdlib.h>

//�|�~test

int main(void) {
	int year;
	printf("�п�J�w���O�_���|�~���~��:");
	scanf("%d", &year);

	if (year % 4000 == 0){
		printf("%d�����|�~\n", year);
	}
	else if (year % 400 == 0) {
		printf("%d���|�~\n", year);
	}
	else if (year % 100 == 0) {
		printf("%d�����|�~\n", year);
	}
	else if (year % 4 == 0) {
		printf("%d���|�~\n", year);
	}
	else{
		printf("%d�����|�~\n", year);
	}

}