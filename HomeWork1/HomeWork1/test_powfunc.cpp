#include<stdio.h>
#include<stdlib.h>

float power(float a, float b) {			//���ưj�� a���� b����(���t����)
	float c = a;						//c �O�d�쥻a
	a = 1;								//a��1�}�l�B��

	if (b >= 0)							//b > 0 �����ƫ�

		for (b; b > 0; b--) {
			a *= c;
		}
	else								//b < 0 ������ (�˼�)

		for (b; b < 0; b++) {
			a /= c;
		}
	return a;							//�^��a
}

int maint(void) {
	float x, y;
	printf("input a:");
	scanf("%f",&x);
	printf("input b:");
	scanf("%f",&y);
	printf("answer is %.4f", power(x,y));
}