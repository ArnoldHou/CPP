#include<stdio.h>
#include<stdlib.h>

float factorial(float a) { // (2n-n)����fuct. a���� 
	float b = 1;
	a = 2 * a - 2;
	for (a; a > 0; a--) {
		b = b*a;

	}
	return b;
}

float pow(float a, float b) {  //���ưj�� a�� b����,���t����
	float c = a;				//c �O�d�쥻a
	a = 1;				     //a��1�}�l�B��
	if (b >= 0)
		for (b; b > 0; b--) {
			a *= c;
		}
	else
		for (b; b < 0; b++) {
			a /= c;
		}
	return a;
}

float cosxj(float a, float b) {  // a������ b��x��
	float sum = 0;		//�[�`���G��sum�A�ñq0�}�l�[

	for (a; a > 0; a--) {	//for ���ƥ[�`

		float s1 = factorial(a);	//s1�����h�[�`���G
		float a1 = pow(-1, a - 1); //a1��(-1) ^ (j - 1) ���G
		float a2 = pow(b, 2 * a - 2); //a2 ��x ^ (2 * j - 2)���G

		sum = sum + a1 * a2 / s1; //cosxj����
	}
	return sum;				//�Ǧ^�[�`���G�^func.
}

int main(void) {
	float a, b;
	printf("input a:");
	scanf("%f", &b);
	printf("input b:");
	scanf("%f", &a);
	printf("answer is %.10f\n", cosxj(a, b));
}
