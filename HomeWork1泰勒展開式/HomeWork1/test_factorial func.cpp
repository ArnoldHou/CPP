#include<stdio.h>
#include<stdlib.h>

float factorial(float a) {					 // (2n-n)����func. a������(j)
	float b = 1;
	a = 2 * a - 2;							// a = 2n-2

	for (a; a > 0; a--) {					// b = a!
		b = b*a;
	}
	return b;								//�^��b
}

int maint(void) {
	float x;
	printf("test number:");
	scanf("%f", &x);
	printf("%f ", factorial(x));
	printf("%f ", x);

}