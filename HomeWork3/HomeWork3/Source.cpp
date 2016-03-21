#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Fibonacci(int a) {
	if (a == 0) {																		//�Ĺs�����@
		return  1;	
	}
	else if (a == 1 || a == 2) {														//�Ĥ@�B�G�����G
		return  2;		
	}
	else {
		return 2 * Fibonacci(a - 1) + Fibonacci(a - 2) - Fibonacci(a - 3);				//�ĤT�� = 2 * �ĤG�� + �Ĥ@�� - �Ĺs��
	}
}

int main(void) {
	int n = 1;																			//����
	printf("�п�J�O�B�Ǧ�ƦC��n��:");						
	scanf("%d", &n);																	//��Jn��

	puts("");
	printf("---------------�ڥs���j�u---------------\n");
	puts("");

	clock_t start, finish;
	double duration;
	int c = 1000000;																	//����100�U�� (c)

	printf("�Y�N����D���j�O�B�Ǧ�ƦC�@�ʸU��\n");								//�D���j
	start = clock();

	int Fibonacci_0 = 1, Fibonacci_1 = 2, Fibonacci_2 = 2, Fibonacci_3;			//�Ĺs��,�Ĥ@��,�ĤG��,�ĤT��

	while (c--) {

		Fibonacci_0 = 1, Fibonacci_1 = 2, Fibonacci_2 = 2;						//���m F(0),F(1),F(2)
		if (n == 0) {
			Fibonacci_3 = Fibonacci_0;											//F(0) ��X 1
		}
		else if (n == 1 || n == 2) {
			Fibonacci_3 = Fibonacci_1;											//F(1),F(2) ��X 2
		}
		else {
			for (int i = 3; i <= n; i++) {
				Fibonacci_3 = 2 * Fibonacci_2 + Fibonacci_1 - Fibonacci_0;				//F(n)=2*F(n-1)+F(n-2)-F(n-3) n>=3
				Fibonacci_0 = Fibonacci_1;												//F(n-2) -> F(n-3)
				Fibonacci_1 = Fibonacci_2;												//F(n-1) -> F(n-2)
				Fibonacci_2 = Fibonacci_3;												//F(n)   -> F(n-1)
			}
		}
	}

	printf("�D���j�O�B�Ǧ�ƦC F(%d) = %d\n", n, Fibonacci_3);


	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("�`�@��O�ɶ�:%.3f seconds\n", duration);								//�D���j����

	puts("");
	printf("---------------�ڥs���j�u---------------\n");
	puts("");

	printf("�Y�N���滼�j�O�B�Ǧ�ƦC�@�ʸU��\n");					//���j�}�l

	c = 1000000;													//���]c��

	start = clock();

	while (c--) {
		Fibonacci_3 = Fibonacci(n);
	}

	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("���j�O�B�Ǧ�ƦC F(%d) = %d\n", n, Fibonacci_3);
	printf("�`�@��O�ɶ�:%.3f seconds\n", duration);					//���j����
	puts("");


	system("pause");
}

