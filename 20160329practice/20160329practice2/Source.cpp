#include<stdio.h>
#include<stdlib.h>
#include"bank.h"

int main(void) {
	int input, a, t = 1;
	int money = 10000;
	while (t) {
		balance;
		printf("�п�J�Ʀr, 1.�s�� , 2.���� , 3.�[�ݾl�B 4.���}\n");
		scanf("%d", &input);

		if (input == 1 || input == 2) {
			printf("�п�J���B:");
			scanf("%d", &a);
		}

		switch (input)
		{
		case 1: 
			in(money,a);
			break;
		case 2:
			out(money,a);
			break;
		case 3:
			balance(money);
			break;
		case 4:
			t = 0;
			break;
		default:
			printf("Errorrrrrr\n");
			break;
		}


	}

}
