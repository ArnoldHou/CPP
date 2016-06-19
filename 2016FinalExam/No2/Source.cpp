#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 20

struct _Stock
{
	char *name;
	int quantity;
	struct _Stock *nextPtr;
};
typedef struct _Stock Stock;
typedef Stock *StockPtr;

void showlist(StockPtr headPtr) {
	while (headPtr != NULL) {
		printf("%-20s%6d\n", headPtr->name, headPtr->quantity);
		headPtr = headPtr->nextPtr;
	}
}

void addlist(StockPtr *headPtr, int quantity, char name[SIZE], int *goods) {
	StockPtr newPtr, currentPtr, prevPtr = NULL;
	newPtr = (StockPtr)malloc(sizeof(Stock));
	newPtr->nextPtr = NULL;
	newPtr->quantity = quantity;
	newPtr->name = (char*)malloc(sizeof(char)*(strlen(name) + 1));
	strcpy(newPtr->name, name);

	if (*headPtr == NULL) {
		*headPtr = newPtr;
		*goods= *goods+1;
	}
	else {
		currentPtr = *headPtr;
		while (currentPtr != NULL &&strcmp(name, currentPtr->name) != 0) {
			prevPtr = currentPtr;
			currentPtr = currentPtr->nextPtr;
		}
		if (currentPtr != NULL) {
			currentPtr->quantity += newPtr->quantity;
		}
		else {
			prevPtr->nextPtr = newPtr;
			*goods = *goods + 1;
		}
	}
}

void dellist(StockPtr *headPtr, int quantity, char name[SIZE], int *goods) {
	StockPtr currentPtr, prevPtr = NULL;
	currentPtr = *headPtr;

	while (currentPtr != NULL &&strcmp(name, currentPtr->name) != 0) {
		prevPtr = currentPtr;
		currentPtr = currentPtr->nextPtr;
	}
	if (currentPtr == NULL) {
		printf("Error goods'name.\n");
	}
	else if (currentPtr->quantity<quantity) {
		printf("Not enough goods to be sold.\n");
	}
	else {
		currentPtr->quantity -= quantity;
		if (currentPtr->quantity == 0) {
			if (prevPtr == NULL) {
				*headPtr = currentPtr->nextPtr;
				*goods = *goods - 1;
			}
			else {
				prevPtr->nextPtr = currentPtr->nextPtr;
				*goods = *goods - 1;
			}
		}
	}
}

void checklist(StockPtr *headPtr, char name[SIZE]) {
	StockPtr currentPtr;
	currentPtr = *headPtr;

	while (currentPtr != NULL &&strcmp(name, currentPtr->name) != 0) {
		currentPtr = currentPtr->nextPtr;
	}
	if (currentPtr == NULL) {
		printf("Goods was sold out or Enter Error.\n");
	}
	else {
		printf("�ӫ~�W��              �ƶq\n");
		printf("%-20s%6d\n", currentPtr->name, currentPtr->quantity);
	}
}

void writelist(StockPtr headPtr, const char *dest,int goods) {
	FILE *fPtr = fopen(dest, "w");
	fprintf(fPtr, "%d\n", goods);

	while (headPtr != NULL) {
		fprintf(fPtr,"%d\t%s\n", headPtr->quantity, headPtr->name);
		headPtr = headPtr->nextPtr;
	}

	fclose(fPtr);
}

void menu(int choose, int *goods, StockPtr *headPtr, const char *dest) {
	char name[SIZE];
	int number;
	puts("\n--------------------------");

	switch (choose)
	{
	case 1:
		printf("�i�f\n�п�J�ӫ~�W��:");
		scanf("%s", name);
		printf("�п�J�ƶq:");
		scanf("%d", &number);
		addlist(headPtr, number, name, goods);
		checklist(headPtr, name);
		break;
	case 2:
		printf("�P�f\n�п�J�ӫ~�W��:");
		scanf("%s", name);
		printf("�п�J�ƶq:");
		scanf("%d", &number);
		dellist(headPtr, number, name, goods);
		checklist(headPtr, name);
		break;
	case 3:
		printf("�ˬd�涵�s�f\n�п�J�ӫ~�W��:");
		scanf("%s", name);
		checklist(headPtr, name);
		break;
	case 4:
		printf("��ܰӫ~�Ҧ��s�f\n");
		printf("�ӫ~�`�ơG%d\n", *goods);
		printf("�ӫ~�W��              �ƶq\n");
		showlist(*headPtr);
		break;
	case 5:
		printf("�s�ɤ�...\n");
		writelist(*headPtr, dest,*goods);
		printf("�s�ɧ���.\n");
		break;
	case 6:
		printf("�s�ɤ�...\n");
		writelist(*headPtr, dest, *goods);
		printf("�s�ɧ���.\n");
		printf("�Y�N���}�t��.\n");
		break;
	case 7:
		printf("�Y�N���}�t��.\n");
		break;
	default:
		break;
	}

	puts("--------------------------\n");
}

int main(int argc, char *argv[]) {
	StockPtr headPtr = NULL;

	FILE *oPtr = fopen(argv[1], "r");   //�}��(�iŪ�g)
	if (oPtr == NULL) {
		printf("File opened error.\n");
		exit(1);
	}

	int goodnumber = 0;						//load files
	char buffer[SIZE];
	fscanf(oPtr, "%s",buffer);	//�Ĥ@�檺�ӫ~�`��
	int quantity;
	while (fscanf(oPtr, "%d\t%s", &quantity, buffer) != EOF) {		//Ū��linklist
		addlist(&headPtr, quantity, buffer, &goodnumber);
	}
	fclose(oPtr);

	int choose;					//menu
	do {
		printf("�i�P�s�t��\n\t1.�i�f\n\t2.�P�f\n\t3.�d�߰ӫ~�w�s\n\t4.�C�X�Ҧ��w�s���~\n\t5.�x�s\n\t6.�x�s�P���}\n\t7.���x�s�N���}\n�п�J�ﶵ:");
		scanf("%d", &choose);
		while (choose < 1 || choose>7) {
			printf("��J���~�A�Э��s��J:");
			scanf("%d", &choose);
		}
		menu(choose, &goodnumber, &headPtr,argv[1]);
	} while (!(choose == 6 || choose == 7));

	system("pause");
}