#include<stdio.h>
#include<stdlib.h>

int totalshoot = 0, totalsum = 0;

float rate(int shoot, int total) {
	totalshoot += shoot;
	totalsum += total;
	return shoot / (float)total;
}

int main(void) {
	int s, t,chose=1;
	
	while (chose !=0) {
		printf("���x�R���v�P�`��:");
		scanf("%d %d", &s, &t);
		while (s > t&&chose!=0) {
			printf("��J���~(��J0����):");
			scanf("%d", &chose);
			printf("���s��J���x�R���v�P�`��:");
			scanf("%d %d", &s, &t);
		}
		printf("�R���v��%.2f\%%(��J0����):", rate(s, t) * 100);
		scanf("%d", &chose);
	}
	printf("�`�R��/���x�ƻP�R���v��:%d/%d %.2f%% \n", totalshoot, totalsum, (totalshoot / (float)totalsum)*100);
}

