#include<stdio.h>
#include<stdlib.h>

int main() {
	char c1, c2, c3, c4;
	printf("�п�J�|�Ӧr��(�ťդ��j):");
	scanf("%c %c %c %c", &c1, &c2, &c3, &c4);
	printf("��J���|�Ӧr����:%c %c %c %c\n", c1, c2, c3, c4);
	printf("��J���|�Ӧr����ascii code ��:%d %d %d %d\n", c1, c2, c3, c4);
	c1 -= 20;
	c2 -= 20;
	c3 -= 20;
	c4 -= 20;
	printf("��J���|�Ӧr���[�K�᪺ascii code��:%d %d %d %d\n", c1, c2, c3, c4);
	printf("��J���|�Ӧr���[�K�ᬰ:%c %c %c %c\n", c1, c2, c3, c4);

}
