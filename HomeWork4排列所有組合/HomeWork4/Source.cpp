#include<stdio.h>
#include<stdlib.h>

int* num;

int test(int a) {											//���Ҧ��L���_�Ʀr a = m
	int c = 0;
	for (int i = 1; i <= a ; i++) {
		for (int j = i + 1; j <= a ; j++) {
			if (num[i] == num[j]) {
				c++;										//���Ыh�[�@
			}
		}
	}
	return c;												//�^��c
}

void Permutations(int n, int m) {							//(n,m)
	do {

		if (test(m) == 0) {									//�P�_���L���СA���ЭȫD0
			for (int i = 1; i <= m ; i++) {					//�q�}�C0�}�l�L��m
				printf("%d ", num[i]);
			}
			puts("");										//����
		}

		num[m] += 1;										//����+1

		for (int j = m ; j >= 0; j--) {						//����>n�h�e���[�@�A���Ʀ^�@
			if (num[j] > n) {
				num[j - 1] += 1;
				num[j] = 1;
			}
		}

	} while (num[0] == 0);									//num[0]�����լO�_����

}

int main(void) {
	int n, m;												//�w�qP(n,m)
	printf("P(n,m)\n");
	printf("Please input n :");
	scanf("%d", &n);
	printf("Please input m :");
	scanf("%d", &m);

	while (n < m || m < 0) {								// m <= n ,m>=0
		printf("You Enter Wrong !\n");
		printf("Please Re-input n :");
		scanf("%d", &n);
		printf("Please Re-input m :");
		scanf("%d", &m);
	}
	printf("--------�Y�N���P(n,m)���Ҧ��ƦC-------\n");

	num = new int[m];

	for (int i = 1; i <= m; i++) {							//��ȳ]�w
		num[i] = i;
	}
	num[0] = 0;												//���д���
	Permutations(n, m);

	return 0;
	delete[] num;
}

