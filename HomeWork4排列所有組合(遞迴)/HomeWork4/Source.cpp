#include<stdio.h>
#include<stdlib.h>
void P(int n, int m);
int test(void);
int* num;
int m1;

int main(void) {
	int n1;												//�w�qP(n,m)
	printf("P(n,m)\n");
	printf("Please input n :");
	scanf("%d", &n1);
	printf("Please input m :");
	scanf("%d", &m1);

	while (n1 < m1 || m1 < 0) {								// m <= n ,m>=0
		printf("You Enter Wrong !\n");
		printf("Please Re-input n :");
		scanf("%d", &n1);
		printf("Please Re-input m :");
		scanf("%d", &m1);
	}
	printf("--------�Y�N���P(n,m)���Ҧ��ƦC-------\n");

	num = new int[m1];

	P(n1, 1);
}

void P(int n, int m) {
	for (num[m] = 1; num[m] <= n; num[m]++) {
		if (m > m1) {
			return;
		}
		else {
			P(n, m + 1);
		}
		if (test() == 0 && num[m1] <= n) {									//�P�_���L���СA���ЭȫD0,num[m1]<=n ��bug
			for (int i = 1; i <= m1; i++) {					//�q�}�C0�}�l�L��m
				printf("%d ", num[i]);
			}
			puts("");
		}
	}
}

int test(void) {											//���Ҧ��L���_�Ʀr a = m
	int c = 0;
	for (int i = 1; i <= m1; i++) {
		for (int j = i + 1; j <= m1; j++) {
			if (num[i] == num[j]) {
				c++;										//���Ыh�[�@
			}
		}
	}
	return c;												//�^��c
}
