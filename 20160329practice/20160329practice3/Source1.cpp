#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int charge(float a) {															//a �O hours
	int b = ceil(a);															//b �O a �L����i��
	if (b <= 12) {													//�L�g�@�O��
		if (b % 3 == 0) {
			int c = b / 3;
			return c * 15;
		}
		else if (b < 3) {
			return 15;
		}
		else {
			int c = b / 3;
			return c * 15 + (b % 3) * 7;
		}
	}
	else {															//���g�@�O��
		int c = b / 3;
		return c * 15 + (b % 3) * 7 + (b - 12) * 20;
	}
}