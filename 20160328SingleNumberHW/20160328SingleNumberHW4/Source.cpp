#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int a, k, hour, min;
	printf("�п�J�j�H,�p�ļƶq (�ťչj�})\n");
	scanf("%d %d", &a, &k);
	while (a < 0 || k < 0) {
		printf("��J���~�A�Э��s��J�j�H,�p�ļƶq (�ťչj�})\n");
		scanf("%d %d", &a, &k);
	}
	printf("�п�J���\�ɬq ex. 18:30\n");
	scanf("%d:%d",&hour,&min);
	while ((hour < 0 || hour >= 24) || (min < 0 || min >= 60)) {
		printf("��J���~�A�Э��s��J���\�ɬq ex. 18:30\n");
		scanf("%d:%d", &hour, &min);
	}
	int check = 60 * hour + min;

	if (check >= 540 && check <= 660) {
		printf("���\�ɬq,�`���B��:%.2f\n", (250.0*a + 250.0*k / 2)*1.1);
	}
	else if (check >= 690 && check <= 870) {
		printf("���\�ɬq,�`���B��:%.2f\n", (450.0*a + 450.0*k / 2)*1.1);
	}
	else if (check >= 1050 && check <= 1290) {
		printf("���\�ɬq,�`���B��:%.2f\n", (550.0*a + 550.0*k / 2)*1.1);
	}
	else {
		printf("�D���\�ɬq\n");
	}

}