#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 52

int main(void) {
	srand(time(NULL));

	int array[52];
	for (int i = 1; i <= 52; i++) {
		array[i - 1] = i-1;
	}

	for (int i = 1; i <= 52; i++) {
		int a = rand() % 52;
		int b = rand() % 52;
		int temp = array[a];
		array[a] = array[b];
		array[b] = temp;
	}


	for (int i = 1; i <= 52; i++) {
		int c = array[i - 1] / 13;
		switch (c)
		{
		case 0:
			printf("�®� ");
			printf("%d\n", array[i - 1] % 13+1);
			break;
		case 1:
			printf("���� ");
			printf("%d\n", array[i - 1] % 13+1);
			break;
		case 2:
			printf("��� ");
			printf("%d\n", array[i - 1] % 13+1);
			break;
		case 3:
			printf("���� ");
			printf("%d\n", array[i - 1] % 13+1);
			break;
		default:
			break;
		}
	}




}

