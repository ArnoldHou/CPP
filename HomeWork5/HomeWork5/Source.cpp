#include"MYHeader.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void encode() {
	char *test = "http://www.w3schools.com/tags/ref_urlencode.asp";
	int times = strlen(test);											//��J����

	char result[1024];
	int counter = 0;													//result���r����m

	for (int i = 1; i <= times; i++) {

		int dec = test[i - 1];											//���o��J�r��ascii��

		if (!((dec >= 48 && dec <= 57) || (dec >= 65 && dec <= 90) || (dec >= 97 && dec <= 122) || (dec == 46))) {  //�^��Ʀr�I����
			result[counter] = '%';
			counter++;
			result[counter] = hexTchar(dec, 1);
			counter++;
			result[counter] = hexTchar(dec, 2);
			counter++;
		}
		else {
			result[counter] = test[i - 1];
			counter++;
		}

	}
	result[counter] = '\0';												//�r���ɤW�����r��
	printf("%s\n", result);
}

void decode() {
	char *test = "http%3A%2F%2Fwww.w3schools.com%2Ftags%2Fref%5Furlencode.asp";
	int times = strlen(test);

	char result[1024];
	int counter = 0;													//result���r����m

	for (int i = 1; i <= times; i++) {
		int asc = test[i - 1];
		if (asc == 37) {
			char ans = charThex(test[i], test[i + 1]);
			i += 2;
			result[counter] = ans;
			counter++;
		}
		else {
			result[counter] = test[i - 1];
			counter++;
		}
	}
	result[counter] = '\0';												//�r���ɤW�����r��
	printf("%s\n", result);
}

int main(void) {


	return 0;
}