#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
int Prime(void);

int main(void) {
	srand(time(NULL));
	int num, n[4];
	int choose = 1;
	while (choose) {
		num = Prime();
		printf("��l�üƬ��G%d\n", num);
		for (int i = 3; i >= 0; i--) {
			n[i] = num % 10;
			num -= n[i];
			num /= 10;
		}
		if (n[0] < n[3]) {
			int temp = n[0];
			n[0] = n[3];
			n[3] = temp;
		}
		else if (n[0] == n[3]) {
			n[0] = 8;
			n[3] = 8;
		}
		for (int i = 0; i <= 3; i++) {
			num *= 10;
			num += n[i];
		}
		do {
			num -= 1;
		} while (num % 12 != 0);
		printf("�K�X���G%d\n", num);
		printf("�O�_�~�򲣥ͱK�X(��J0�{������)�G");
		scanf("%d", &choose);
	}
}

int Prime(void) {

	int num = rand() % 9000 + 1000;

	int counter = 0;
	do {

		/*while (num % 6 != 1 && num % 6 != 5) {
			num = rand() % 9000 + 1000;
		}*/

		if (counter != 0) {
			num = rand() % 9000 + 1000;
		}
		counter = 0;
		for (int i = 2; i <= sqrt(num); i++) {
			if (num%i == 0) {
				counter++;
			}
			if (counter > 0) {
				break;
			}
		}
	} while (counter != 0);
	return num;
}