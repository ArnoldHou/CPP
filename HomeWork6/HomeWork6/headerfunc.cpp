#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 40

int counterline(FILE *Ptr) {						//�p��L�o�ɦ��
	char buffer[SIZE];
	int counter = 0;

	while (fgets(buffer, SIZE, Ptr) != NULL) {			//�@���@��A��Ū��r�hcounter+1
		if (strcmp(buffer, "\n") != 0) {				//�ťզ椣��
			counter++;
		}
	}

	return counter;
}

void filter(FILE *Ptr, char **input, int times) {		//Ū���L�o��

	for (int i = 1; i <= times; i++) {					//times�����

		char buffer[SIZE];
		fgets(buffer, SIZE, Ptr);
		int length = strlen(buffer);					//Ū���r���

		for (int j = 1; j <= length; j++) {
			if (buffer[j - 1] == '\n' || buffer[j - 1] == '\t' || buffer[j - 1] == ' ' || buffer[j - 1] == '\r') {
				buffer[j - 1] = '\0';
				break;
			}
		}

		input[i - 1] = (char*)malloc(sizeof(char)*(length + 1));
		strcpy(input[i - 1], buffer);				
	}
}

void write(FILE *fPtr, char content[]) {
	for (int index = 0; content[index] != '\0'; index++) {
		fputc(content[index], fPtr);
	}
	fputc('\n', fPtr);
}

FILE* open(char fileName[], char type[]) {
	FILE *fPtr = fopen(fileName, type);
	if (fPtr == NULL) {
		printf("The file opened error.\n");
		exit(1);
	}
	return fPtr;
}