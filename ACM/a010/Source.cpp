#include<stdio.h>

int main(void) {
	int num;
	while (scanf("%d", &num) != EOF) {
		for (int i = 2; i <= num;) {
			int counter = 0;
			while (num%i == 0) {
				num /= i;
				counter++;
			}

			if (counter > 1) {
				printf("%d^%d", i, counter);
			}
			else if (counter==1){
				printf("%d",i);
			}

			for (int j = i; j <= num; j++) {		//�٦��ƴN�� * 
				if (num%j == 0 ) {
					if (counter != 0) {				//�ݫe������
						printf(" * ");
					}
					i = j;
					break;
				}
			}
		}
		puts("");
	}
}