#include<stdio.h>

double GetSeriesN(int n);
double iSum(int x);
double rSum(int y);

int main(void) {
	int x, y;
	printf("�п�J��Ӥ��� 1~30 ���ơG");
	scanf("%d %d", &x, &y);

	while ((x > 30 || x < 1) || (y < 1 || y>30)) {
		printf("�Э��s��J��Ӥ��� 1~30 ���ơG\n");
		scanf("%d %d", &x, &y);
	}

	if (x < y) {
		printf("�ƦC����%d�Ө�%d���Ƭ��G\n", x, y);
		for (int i = x; i <= y; i++) {
			printf("%.3lf ", GetSeriesN(i));
		}
		puts("");
	}
	else {
		printf("�ƦC����%d�Ө�%d���Ƭ��G\n", x, y);
		for (int i = x; i >= y; i--) {
			printf("%.3lf ", GetSeriesN(i));
		}
		puts("");
	}

	printf("�п�Jx�ȡG");
	scanf("%d", &x);
	printf("iSum(%d)=%lf\n", x, iSum(x));

	printf("�п�Jy�ȡG");
	scanf("%d", &y);
	printf("rSum(%d)=%lf\n", y, rSum(y));
	return 0;
}

double GetSeriesN(int n) {
	if (n <= 0) {
		return (double)1;
	}
	else {
		return ((n + 1) / (double)(n + 2))*GetSeriesN(n - 1);
	}
}

double rSum(int y) {
	if (y < 1) {
		return -1;
	}

	if (y == 1) {
		return GetSeriesN(1);
	}
	else {
		return  GetSeriesN(y) + rSum(y - 1);
	}
	
}

double iSum(int x) {
	if (x < 1) {
		return -1;
	}
	double sum1 = 0;

	for (int i = x; i>=1; i--) {
		double sum = 1;
		for (int j = 1; j <= i; j++) {
			sum = sum*((j + 1) / (double)(j + 2));
		}
		sum1 += sum;
	}
	return sum1;
}

