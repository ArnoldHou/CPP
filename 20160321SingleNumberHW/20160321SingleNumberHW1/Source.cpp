#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int g1, g2;
	printf("�Ш̧ǿ�J���ɦ��Z�B�������Z:\n");
	scanf("%d", &g1);
	scanf("%d", &g2);

	int p1, p2, p3;
	printf("�Ш̧ǿ�J���ɦ��Z�ʤ���B�������Z�ʤ���B�������Z�ʤ���]�Ҧp0.4�h��J40):\n");
	scanf("%d", &p1);
	scanf("%d", &p2);
	scanf("%d", &p3);

	int goal;
	printf("�п�J���榨�Z:\n");
	scanf("%d", &goal);

	printf("���F%d���A�ҥH�z���������Z������%.2f��\n", goal, (goal - g1*p1 / 100 - g2*p2 / 100) / (p3 / 100.0));
}