#include<stdio.h>
#include<stdlib.h>

float factorial(float a) {					 // (2n-n)����func. a������(j)
	float b = 1;
	a = 2 * a - 2;							// a = 2n-2

	for (a; a > 0; a--) {					// b = a!
		b = b*a;
	}
	return b;								//�^��b
}

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

float cosxj(float a, float b) {			// a������ b��x��
	float sum = 0;						//�[�`���G��sum�A���0

	for (a; a > 0; a--) {				//for	���ƥ[�`
		float f = factorial(a);			//f		(2n-2)������
		float a1 = power(-1, a - 1);	//a1	(-1) ^ (j - 1) ���G
		float a2 = power(b, 2 * a - 2);	//a2	x ^ (2 * j - 2)���G

		sum = sum + a1 * a2 / f;		//cosxj�����G
	}
	return sum;							//�^��sum
}

int main(void) {
	float a, b;
	printf("input a:");
	scanf("%f", &a);
	printf("input b:");
	scanf("%f", &b);
	printf("answer is %.10f\n", cosxj(a, b));
}
