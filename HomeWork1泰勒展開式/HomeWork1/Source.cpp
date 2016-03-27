#include<stdio.h>
#include<stdlib.h>

double factorial(double a) {				 // (2n-n)����func. a������(j)
	double b = 1;
	a = 2 * a - 2;							// a = 2n-2

	for (a; a > 0; a--) {					// b = a!
		b = b*a;
	}
	return b;								//�^��b
}

double power(double a, double b) {			//���ưj�� a���� b����(���t����)
	double c = a;							//c �O�d�쥻a
	a = 1;									//a��1�}�l�B��

	if (b >= 0)								//b > 0 �����ƫ�
		for (b; b > 0; b--) {
			a *= c;
		}

	else									//b < 0 ������ (�˼�)
		for (b; b < 0; b++) {
			a /= c;
		}
	return a;								//�^��a
}

double cosxj(double a, double b) {			// a������ b��x��
	double sum = 0;							//�[�`���G��sum�A���0

	for (a; a > 0; a--) {					//for	���ƥ[�`
		double f = factorial(a);			//f		(2n-2)������
		double a1 = power(-1, a - 1);		//a1	(-1) ^ (j - 1) ���G
		double a2 = power(b, 2 * a - 2);	//a2	x ^ (2 * j - 2)���G
		sum = sum + a1 * a2 / f;			//cosxj�����G
	}
	return sum;								//�^��sum
}

double abs(double a, double b) {			//�����
	if (a >= b)
		return a - b;
	else
		return b - a;
}

int main(void){

	double x, i;									//x��, -i����
	double j = 2;									//j���� ,>=2

	printf("------------------------------------------------------\n");
	printf("|�p�� | cosx(j) - cosx(j-1) | < 10 ^ (-i) ���̤p j ��|\n");
	printf("------------------------------------------------------\n");
	printf("------> �п�J x ��:");
	scanf("%lf",  &x);
	printf("---->   �п�J i ��:");					//i���p���I��X��
	scanf("%lf",  &i);

	while ((float)i != (int)i) {
		printf("i �ݬ���ơA�Э��s��J:");
		scanf("%lf", &i);
	}

	double cos2 = cosxj(j, x);						//cos2���ᶵ
	double cos1 = cosxj(j - 1, x);					//cos1���e��
		
	while (abs(cos2, cos1) > power(10, -i)) {		//�ᶵ��e��>10^(-1)�h����
		j++;										//�]������L�A�ҥHj��+1
		cos2 = cosxj(j, x);
		cos1 = cosxj(j - 1, x);
	}

	printf("--> | cos%04.2f(%2d) - cos%04.2f(%2d) | = %.9f\n", x, (int)j, x, (int)j - 1, abs(cos2, cos1));
	printf("--> | %10.9f - %10.9f | < 10 ^(%d) ���̤p j �Ȭ� %d\n", cos2, cos1, int(-i), (int)j);
	printf("-->   cos%04.2f(%2d) = %10.9f", x, (int)j, cos2);

	system("pause");
}

