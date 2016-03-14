#include<stdio.h>
#include<stdlib.h>

float factorial(float a) {	 // (2n-n)����fuct. a���� 
	float b = 1;
	a = 2 * a - 2;			// a = 2n-2
	for (a; a > 0; a--) {	// b = a!
		b = b*a;
	}
	return b;				//�^��b���G
}

float pow(float a, float b) {  //���ưj�� a�� b����(���t����)
	float c = a;				//c �O�d�쥻a
	a = 1;				       //a��1�}�l�B��
	if (b >= 0)					//b > 0 �����ƫ�
		for (b; b > 0; b--) {
			a *= c;
		}
	else						//b < 0 ������ (�˼�)
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

float abs(float a, float b) {	//�����
	if (a >= b) 
		return a - b;
	else 
		return b - a;
}

int main(void){
	float x, i; //x�� i��10^(-i)
	float j = 2;//,j������

	printf("�Y�N�p��cosx�ᶵ��e��<10^(-i)��j��\n");
	printf("�п�J���Ǯi�}����x��:");
	scanf("%f", &x);
	printf("�п�J���Ǯi�}����i��(�D��p���I�ĴX��):");
	scanf("%f", &i);

	do {
		float cos2 = cosxj(j, x);
		float cos1 = cosxj(j - 1, x);
		float abs1 = abs(cos2, cos1);
		float final1 = pow(10, -i);
		if (abs1 < final1) {
			break;
		}
		j++;
	} while (i>0);

	printf("cosx�ᶵ��e��<10^(-i)��j�Ȭ�:%.0f\n", j);	
	printf("cos%d%d (cosxj) ��%f\n", (int)x, (int)j, cosxj(j, x));

	system("pause");
}

