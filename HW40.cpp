//��Ī�Ǵ� �� ���
#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i, j, line;
	while (1) {
		printf("# ��� ���� ���� �Է��Ͻÿ�: ");
		if (scanf("%d", &line) == 1);
		else break;
		for (i = 0; i < line; i++)
		{
			for (j = 0; j < 60; j++)
			{
				if (j <= i)printf("*");
				else {

					if (60 - j <= i)printf("*");
					else printf(" ");
				}

			}
			printf("\n");
		}
	}
	return 0;
}