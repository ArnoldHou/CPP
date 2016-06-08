#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define SIZE 20

struct _Node
{
	char *words;
	int frequency;
	struct _Node *nextPtr;
};

typedef struct _Node Node;
typedef Node *NodePtr;

void insertlist(NodePtr *headPtr, char buffer[SIZE], int length) {
	NodePtr prevPtr = NULL, currentPtr, newPtr;					
	newPtr = (NodePtr)malloc(sizeof(Node));						//�s�`�I
	newPtr->words = (char*)malloc(sizeof(char)*length);
	newPtr->frequency = 1;
	newPtr->nextPtr = NULL;
	strcpy(newPtr->words, buffer);

	if (*headPtr == NULL) {										//�Ĥ@��
		*headPtr = newPtr;
	}
	else {
		currentPtr = *headPtr;									//���Jlinkedlist��currenPtr
		while (currentPtr != NULL&&strcmp(buffer, currentPtr->words) >= 0) {	//�Y�r��<��e�r�� 
			prevPtr = currentPtr;
			currentPtr = currentPtr->nextPtr;
		}

		if (prevPtr != NULL&&strcmp(buffer, prevPtr->words) == 0) {				//�@�˫hfrequency++
			prevPtr->frequency++;
		}
		else {	

			if (prevPtr == NULL) {												//�Y�O��}�Y��p�A�h�ܶ}�Y
				newPtr->nextPtr = currentPtr;
				*headPtr = newPtr;
			}
			else {																//�Y���e�@�ӡA�h�e�@�ӫ��V�s���A�s��nextPtr���V�U�@��
				prevPtr->nextPtr = newPtr;
				newPtr->nextPtr = currentPtr;
			}
		}
	}
}

void displaylist(NodePtr headPtr) {
	while (headPtr != NULL) {
		printf("%-15s(%02d) -> ", headPtr->words, headPtr->frequency);
		headPtr = headPtr->nextPtr;
	}
	printf("NULL\n");
}

int main(int argc, char *argv[]) {
	FILE *oPtr = fopen(argv[1], "r");
	if (oPtr == NULL) {
		printf("Opened File Error.\n");
		exit(1);
	}

	NodePtr headPtr = NULL;
	char buffer[SIZE];
	while (fscanf(oPtr, "%s", buffer) != EOF) {

		int length = strlen(buffer);

		for (int i = 1; i <= length; i++) {
			if (!(isalnum(buffer[i - 1]) || buffer[i - 1] == '\'')) {			//�D�J��^�ƩM'�h���h

				if (isalnum(buffer[i]) || buffer[i] == '\'') {					//�}�Y�����������h,ex "I"
					for (int j = i; j <= length; j++) {
						buffer[j - 1] = buffer[j];	
					}
				}
				else {
					buffer[i - 1] = '\0';
				}

				length--;													
			}
		}

		length++;
		insertlist(&headPtr, buffer, length);
	}
	displaylist(headPtr);
	fclose(oPtr);
}