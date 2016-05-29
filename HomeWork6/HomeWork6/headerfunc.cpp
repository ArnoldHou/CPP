#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 40

int counterline(FILE *Ptr) {							//�p��L�o�ɦ��
	char buffer[SIZE];
	int counter = 0;

	while (fgets(buffer, SIZE, Ptr) != NULL) {			//�@���@��A��Ū��r�hcounter+1
		counter++;
	}

	return counter;
}

void filter(FILE *Ptr, char **input, int times) {		//Ū���L�o��

	for (int i = 1; i <= times; i++) {					//times�����

		char buffer[SIZE];
		fgets(buffer, SIZE, Ptr);
		int length = strlen(buffer);					//Ū���r���

		for (int j = 1; j <= length; j++) {
			while (buffer[j - 1] == ' ' || buffer[j - 1] == '\n' ||  buffer[j - 1] == '\r' || buffer[j - 1] == '\t') {			//�B�zbuffer�������^�ƪ��r
				for (int k = j; k <= length; k++) {
					buffer[k - 1] = buffer[k];
				}
				length--;
			}
		}

		input[i - 1] = (char*)malloc(sizeof(char)*(length + 1));
		strcpy(input[i - 1], buffer);					//buffer��sinput
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


void fill(FILE *Ptr, char ** filter, int times) {
	char ch;
	char buffer[SIZE];
	int counter = 0, c = 0;

	while ((ch = fgetc(Ptr)) != EOF) {

		if ((ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
			buffer[c] = ch;
			c++;
		}
		else {
			buffer[c] = '\0';
			for (int i = 1; i <= times; i++) {
				if (strcmp(buffer, filter[i - 1]) == 0) {
					fseek(Ptr, counter*sizeof(char), SEEK_SET);			//�^����л\����m
					for (int i = 1; i <= c; i++) {						//�л\
						fputc(' ', Ptr);
					}
					fputc(ch, Ptr);
				}
			}
			c++;
			counter += c;									
			c = 0;
			buffer[c] = '\0';

			fseek(Ptr, counter * sizeof(char), SEEK_SET);				//�^��U�@��Ū����m
		}
	}
}