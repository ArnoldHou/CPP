#include<stdio.h>

double calculate(double money, int expend, double rate);

int main(void) {
	double money = 50000;
	double rate;
	int expend;
	int counter = 0;

	printf("�п�J�C�Ӥ�Q�v�P�ͬ���X\n");
	scanf("%lf %d", &rate, &expend);
	while (rate < 0 || expend < 0) {
		printf("�Э��s��J�C�Ӥ�Q�v�P�ͬ���X\n");
		scanf("%f %d", &rate, &expend);
	}
	
	while (money > expend) {
		counter++;
		printf("��%d�Ӥ�ѡG%.2f\n", counter, calculate(money,expend,rate));
		money = calculate(money, expend, rate);
	}
	printf("%d�Ӥ�ͬ��O�N������\n", counter);
}

double calculate(double money,int expend,double rate) {
	double sum = money;
	sum = sum*(1 + rate);
	sum -= expend;
	return sum;
}