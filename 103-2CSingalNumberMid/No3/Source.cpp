#include<stdio.h>

double power(double r, int n);										//(1+r)^-N
double monthPaymoney(int p, double r, int month);					//r/(1-(1+r)^-N) * p
double moneyPaymonth(int p, int balance, double r, int month);		//P/N+�|���ٴڥ����l�B*r

int main(void) {
	int money, month;
	double rate, sum1, sum2;
	printf("�п�J�жU���B�G");
	scanf("%d", &money);
	printf("�п�J�������ơG");
	scanf("%d", &month);
	printf("�п�J��Q�v�G");
	scanf("%lf", &rate);

	puts("");
	puts("=====���������v�٪k=====");
	sum1 = 0;
	printf("������ú���B�����G%.3lf\n", monthPaymoney(money, rate, month));
	sum1 = monthPaymoney(money, rate, month)*month;
	printf("������ٴ��`�B�����G%.3lf���A�Q������%.3lf��\n", sum1, sum1 - money);

	puts("");
	puts("=====���������v�٪k=====");
	int i = 1;
	sum2 = 0;
	int balance = money;
	for (i; i <= month; i++) {
		double pay = moneyPaymonth(money, balance, rate, month);
		printf("��%d����ú���B��%.3lf��\n", i, pay);
		balance -= money / month;
		sum2 += pay;
	}
	printf("������ٴ��`�B�����G%.3lf���A�Q������%.3lf��\n", sum2, sum2 - money);
	puts("");

	if (sum1 > sum2) {
		printf("���������v�٪k�ݥI�Q�������A�ҥH�A�ĥΥ��������v�٪k���E��I\n");
	}
	else {
		printf("���������v�٪k�ݥI�Q�������A�ҥH�A�ĥΥ��������v�٪k���E��I\n");
	}
}

double power(double r, int n) {
	if (n == 0) {
		return 1 ;
	}
	else {
		return (1 / ((1 + r))*power(r, n - 1));
	}
}

double monthPaymoney(int p, double r, int month) {
	return r / (1 - power(r, month))*p;
}

double moneyPaymonth(int p, int balance, double r, int month) {
	return p / month + balance*r;
}
