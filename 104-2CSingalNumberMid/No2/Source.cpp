#include<stdio.h>
#include<math.h>

int main(void) {
	float n1, n2;
	char op;
	printf("�п�J�Ĥ@�Ӽ�\n");
	scanf("%f", &n1);
	printf("�п�J�B��Ÿ�\n");
	scanf("%s", &op);
	if (op != 'q' && op != 'c') {
		printf("�п�J�ĤG�Ӽ�\n");
		scanf("%f", &n2);
	}

	switch (op)
	{
	case '+':
		n1 = n1 + n2;
		printf("Ans�G%.2f\n", n1);
		break;
	case '-':
		n1 = n1 - n2;
		printf("Ans�G%.2f\n", n1);
		break;
	case '*':
		n1 = n1 * n2;
		printf("Ans�G%.2f\n", n1);
		break;
	case '/':
		n1 = n1 / n2;
		printf("Ans�G%.2f\n", n1);
		break;
	case 's':
		n1 = pow(n1,n2);
		printf("Ans�G%.2f\n", n1);
		break;
	case 'q':
		n1 = sqrt(n1);
		printf("Ans�G%.2f\n", n1);
		break;
	case 'm':
		n1 = (int)n1 % (int)n2;
		printf("Ans�G%.2f\n", n1);
		break;
	case 'c':
		return main();
		break;
	default:
		break;
	}
	while (1) {
		printf("�п�J�B��N����e���}\n");
		scanf("%s", &op);
		if (op == 'e') {
			break;
		}
		if (op != 'q' && op != 'c') {
			printf("�п�J�ĤG�Ӽ�\n");
			scanf("%f", &n2);
		}

		switch (op)
		{
		case '+':
			n1 = n1 + n2;
			printf("Ans�G%.2f\n", n1);
			break;
		case '-':
			n1 = n1 - n2;
			printf("Ans�G%.2f\n", n1);
			break;
		case '*':
			n1 = n1 * n2;
			printf("Ans�G%.2f\n", n1);
			break;
		case '/':
			n1 = n1 / n2;
			printf("Ans�G%.2f\n", n1);
			break;
		case 's':
			n1 = pow(n1, n2);
			printf("Ans�G%.2f\n", n1);
			break;
		case 'q':
			n1 = sqrt(n1);
			printf("Ans�G%.2f\n", n1);
			break;
		case 'm':
			n1 = (int)n1 % (int)n2;
			printf("Ans�G%.2f\n", n1);
			break;
		case 'c':
			return main();
			break;
		default:
			break;
		}

	}
	fflush(stdin);
	return 0;
}