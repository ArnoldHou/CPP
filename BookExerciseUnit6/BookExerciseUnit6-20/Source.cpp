#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	int sum;
	int win = 0, lose = 0;
	int a, b, c=0;
	srand(time(NULL));

	for (int i = 1; i <= 1000; i++) {
		a = rand() % 6 + 1;
		b = rand() % 6 + 1;
		c++;
		sum = a + b;

		switch (sum)
		{
		case 7:
		case 11:
			win++;
			break;
		case 2:
		case 3:
		case 12:
			lose++;
			break;
		case 4:
			while (sum != 7) {
				a = rand() % 6 + 1;
				b = rand() % 6 + 1;
				c++;
				sum = a + b;
				if (sum == 4) {
					win++;
					break;
				}
			}
			if (sum != 4) {
				lose++;
			}
			break;
		case 5:
			while (sum != 7) {
				a = rand() % 6 + 1;
				b = rand() % 6 + 1;
				c++;
				sum = a + b;
				if (sum == 5) {
					win++;
					break;
				}
			}
			if (sum != 5) {
				lose++;
			}

			break;
		case 6:
			while (sum != 7) {
				a = rand() % 6 + 1;
				b = rand() % 6 + 1;
				c++;
				sum = a + b;
				if (sum == 6) {
					win++;
					break;
				}
			}
			if (sum != 6) {
				lose++;
			}
			break;
		case 8:
			while (sum != 7) {
				a = rand() % 6 + 1;
				b = rand() % 6 + 1;
				c++;
				sum = a + b;
				if (sum == 8) {
					win++;
					break;
				}
			}
			if (sum != 8) {
				lose++;
			}
			break;
		case 9:
			while (sum != 7) {
				a = rand() % 6 + 1;
				b = rand() % 6 + 1;
				c++;
				sum = a + b;
				if (sum == 9) {
					win++;
					break;
				}
			}
			if (sum != 9) {
				lose++;
			}
			break;
		case 10:
			while (sum != 7) {
				a = rand() % 6 + 1;
				b = rand() % 6 + 1;
				c++;
				sum = a + b;
				if (sum == 10) {
					win++;
					break;
				}
			}
			if (sum != 10) {
				lose++;
			}
			break;
		default:
			break;
		}

	}
	printf("WIN:%d\nLOSE:%d\n", win, lose);
	printf("How long :%.2f", c / 1000.0);

	//�@�س̴��M����չC���O�٬���crap�����Y��l�C���A�o�b���@�ɦU�a�����]�̳��i�ݨ�C�o�ӹC�����W�h��²��A�p�U�G
	//���a���Y������l�C�C�@����l�����ӭ��A���O�観1�A2�A3�A4�A5�A�M6���I�C
	//���l�R��U�ӫ�A�N��ӻ�l�¤Ѫ����@�����I�Ƭۥ[�_�ӡC�p�G�Ĥ@�����Y�K�Y�X7�I��11�I�A
	//����P�w���aĹ�C�Y�Ĥ@���Y�X2�I�A3�I��12�I�]�o���I�ƺ٬�crap�^�A����h�O���a��]�Y���aĹ�^�C
	//�p�G�Ĥ@���Y�X4�I�A5�I�A6�I�A8�I�A9�I��10�I�A�h�o���I�Ʀ������a���ؼ��I�ơC�A�����~����Y�o������l�A
	//�����Y�X�A���ؼ��I�Ƥ~��Ĺ�C���Y���a�b�F���ؼ��I�Ƥ��e�Y�X�F7�I�A�h�P�w���a��C
}