//�ﰢ ���ĺ� ����ϱ�
//1. ������ �빮�ڸ� �Է� �޴´�. 2. 'A'���� ��� 3. ������ �빮�� �̿ܿ� �ٸ� ���� �Է� �� ����.
//main���� �ۼ�
#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char ch;
	int i, j;
	while (1)
	{
		printf("* ������ �빮�� �Է�('A'~'Z'): ");
		scanf(" %c", &ch);
		if (ch >= 'A' && ch <= 'Z')
		{
			for (i = 0; i <= ch - 'A'; i++)
			{
				for (j = 0; j <= i; j++) { printf("%c", ch - j); }
				printf("\n");
			}
			printf("\n");
		}
		else break;
	}
	return 0;
}