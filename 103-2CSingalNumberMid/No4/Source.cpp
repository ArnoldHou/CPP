#include<stdio.h>

int main(void) {
	int w, x, y = 0, z, d, sum = 0;
	int hin, min, hout, mout;

	printf("�п�J�y�p�ɶ�(8:00~10:00)�e�������A�C�������O�O�ΡG");
	scanf("%d", &w);
	printf("�п�J�y�p�ɶ�(8:00~10:00)��������A�C�������O�O�ΡG");
	scanf("%d", &x);
	printf("�п�J��l�ɬq�A�C�������O�O�ΡG");
	scanf("%d", &z);
	printf("�п�J��q�q�ܳq�ܮɶ��W�L�X�p�ɡA�q�ܶO�H�K��p��G");
	scanf("%d", &d);



	char choose = 'y';
	while (choose == 'y' || choose == 'Y') {
		y++;
		printf("�п�J��%d�q�q�ܶ}�l�q�ܮɶ��G", y);
		scanf("%d %d", &hin, &min);
		printf("�п�J��%d�q�q�ܵ����q�ܮɶ��G", y);
		scanf("%d %d", &hout, &mout);
		while ((hout * 60 + mout) < (hin * 60 + min)) {
			printf("�}�l�ɶ��j�󵲧��ɶ��A�Э��s��J��%d�q�q�ܪ��q�ܮɶ�\n",y);
			printf("�п�J��%d�q�q�ܶ}�l�q�ܮɶ��G", y);
			scanf("%d %d", &hin, &min);
			printf("�п�J��%d�q�q�ܵ����q�ܮɶ��G", y);
			scanf("%d %d", &hout, &mout);
		}
		int totalstart = hin * 60 + min;
		int totalend = hout * 60 + mout;
		int total = totalend - totalstart;
		printf("�`�q�ܮɶ����G%d�p�� %d����\n", total / 60, total % 60);

		float discount = 1;
		if (total > d * 60) {
			discount = 0.8;
		}
		int pay;
		if (totalstart >= 480 && totalend <= 600) {
			
			if (total > 5) {
				pay = ((total - 5) * x + 5 * w)*discount;
				printf("���q�q�ܶO��ú%d��\n", pay);
			}
			else {
				pay = w*total*discount;
				printf("���q�q�ܶO��ú%d��\n", pay);
			}
		}
		else if (totalstart >= 480 && totalend > 600) {
			if ((600 - totalstart) > 5) {
				pay = ((600 - totalstart - 5) * x + 5 * w + (totalend - 600)*z)*discount;
				printf("���q�q�ܶO��ú%d��\n", pay);
			}
			else {
				pay = ((600 - totalstart) * w + (totalend - 600)*z)*discount;
				printf("���q�q�ܶO��ú%d��\n", pay);
			}
		}
		else if (totalstart < 480 && totalend <= 600) {
			if ((totalend - 480) > 5) {
				pay = ((totalend - 485)*x + 5 * w + (480 - totalstart)*z)*discount;
				printf("���q�q�ܶO��ú%d��\n", pay);
			}
			else {
				pay = ((totalend - 480)*w + (480 - totalstart)*z)*discount;
				printf("���q�q�ܶO��ú%d��\n",pay);
			}
		}
		else if (totalstart < 480 && totalend>600) {
			pay = (115 * x + 5 * w + (total - 120)*z)*discount;
			printf("���q�q�ܶO��ú%d��\n", pay);
		}
		else {
			pay = total*z;
			printf("���q�q�ܶO��ú%d��\n", pay);
		}
		sum += pay;
		printf("�O�_�~���J�U�@�q�q�ܸ��(y/n)�G");
		scanf("%s", &choose);
	}
	printf("�@��J%d���q�ܸ�ơA�`��~�B��%d��\n", y, sum);

	return 0;
}