#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(void)
{
	char hex1[4], hex2[4];													//hex1,hex2���r��

	printf("Please Enter First Hexadecimal Value 4bytes :");				//��Jhex1
	scanf("%s",&hex1);

	for (int i = 0; i <= 3; i++) {											//Ū����ASCII���ȡA�ର�Q�i�쪺��
		if (hex1[i] <= 57 && hex1[i] >= 48) {								//48 => 0 , 57 => 9;
			hex1[i] = hex1[i] - 48;	
		}
		else if (hex1[i] <= 70 && hex1[i] >= 65) {							//65 => A , 70 => F
			hex1[i] = hex1[i] - 55;
		}
		else if (hex1[i] <= 102 && hex1[i] >= 97) {							//97 => a , 102 => f
			hex1[i] = hex1[i] - 87;
		}
		else {
			printf("You input Wrong!\n");
			printf("The program will restart!\n");
			Sleep(1000);
			return main();
		}
	}

	int d1 = (hex1[0] << 12) + (hex1[1] << 8) + (hex1[2] << 4) + hex1[3];	//d1 ��hex1���Q�i�쪺��

	char op;																//��J�B��l
	printf("Please chose operator (+,-,*,/) :");
	scanf("%s",&op);

	printf("Please Enter Second Hexadecimal Value 4bytes :");				//��Jhex2
	scanf("%s",&hex2);	

	for (int i = 0; i <= 3; i++) {
		if (hex2[i] <= 57 && hex2[i] >= 48) {
			hex2[i] = hex2[i] - 48;
		}
		else if (hex2[i] <= 70 && hex2[i] >= 65) {
			hex2[i] = hex2[i] - 55;
		}
		else if (hex2[i] <= 102 && hex2[i] >= 97) {
			hex2[i] = hex2[i] - 87;
		}
		else {
			printf("You input Wrong!\n");
			printf("The program will restart!\n");
			Sleep(1000);
			return main();
		}
	}

	int d2 = (hex2[0] << 12) + (hex2[1] << 8) + (hex2[2] << 4) + hex2[3];	//d1 ��hex2���Q�i�쪺��
	


	switch (op)																//�z�L��J���B��l�i���ܥ[���
	{
	case '+':
		printf("%04x + %04x = %d\n", d1, d2, d1 + d2);
		break;
	case '-':
		printf("%04x - %04x = %d\n", d1, d2, d1 - d2);
		break;
	case '*':
		printf("%04x * %04x = %d\n", d1, d2, d1 * d2);
		break;
	case '/':
		printf("%04x / %04x = %.2f\n", d1, d2, d1 / (float)d2);
		break;
	default:
		printf("You Input Wrong Operator!");
		break;
	}

	system("pause");
	return 0;
}