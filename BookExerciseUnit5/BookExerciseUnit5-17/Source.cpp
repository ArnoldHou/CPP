#include<stdio.h>
#include<stdlib.h>

void multiple(int a, int b) {
	if (a%b == 0 || b%a == 0) {
		printf("True\n");
	}
	else
		printf("False\n");
}

int main(void) {
		int a, b;
		printf("���ƧP�_�A�п�J�G�ӼƦr�åΪťչj�}:");
		scanf("%d %d", &a, &b);
		multiple(a, b);

}