#include<stdlib.h>
#include<stdio.h>
#include<time.h>

//�q���p�C��

int main(void) {
	int p;
	int c=0;
	srand(time(NULL));

	printf("�q���p�C��\n");

	while (c <= 3) {
		
		int cp = rand() % 3 + 1;

		
		printf("�п�J 0(���Y),1(��),2(�ŤM):");
		scanf("%d", &p);
		
		switch (p) {
		case 0:
			if (cp == 2) {
				printf("�AĹ�F%d��\n", c);
				printf("Ĺ�T������X�C��\n");
				c++;
			}
			else if (cp == 1) {
				printf("�A��F�A�ٻݭnĹ%d���~��\n", 3-c);
			}
			else {
				printf("����I�ٻݭnĹ%d���~��\n", 3-c);
			}
			break;
		case 1:
			if (cp == 0) {
				printf("�AĹ�F%d��\n", c);
				printf("Ĺ�T������X�C��\n");
				c++;
			}
			else if (cp == 2) {
				printf("�A��F�A�ٻݭnĹ%d���~��\n", 3-c);
			}
			else {
				printf("����I�ٻݭnĹ%d���~��\n", 3-c);
			}
			break;
		case 2:
			if (cp == 1) {
				printf("�AĹ�F%d��\n", c);
				printf("Ĺ�T������X�C��\n");
				c++;
			}
			else if (cp == 0) {
				printf("�A��F�A�ٻݭnĹ%d���~��\n", 3-c);
			}
			else {
				printf("����I�ٻݭnĹ%d���~��\n", 3-c);
			}
			break;
		}
	}
}