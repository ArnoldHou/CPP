#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int x, y, factor=0;
	printf("�п�J�G�ӥ���ơA�N��X�̤j���]�� (�Q�Ϊťչj�}):");
	scanf("%d %d", &x, &y);
	if (x > y) {
		for (int i = y; i >= 1; i--) {
			if ((x % i == 0) && (y % i == 0)) {
				factor = i;
				if (factor != 0) {
					break;
				}
			}
		}
	}
	else {
		for (int i = x; i >= 1; i--) {
			if ((x % i == 0) && (y % i == 0)) {
				factor = i;
				if (factor != 0) {
					break;
				}
			}
		}
	}
	printf("�̤j���]�Ƭ�:%d\n", factor);
	char yn;
	printf("��Jy���s����:");
	scanf("%s", &yn);

	if (yn == 'y') {
		return main();
	}

}