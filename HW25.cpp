//�� 5���� ������ �Է¹޾� �� ���� ���� ����ϱ�
#include<stdio.h>
#pragma warning (disable:4996)
int main()
{
	int n,i;
	for (i = 0; i < 5; i++)
	{
		while (1)
		{
			printf("0���� ū���� �Է��Ͻÿ�(%d����) :", i + 1);
			scanf("%d", &n);
			if (n > 0)break;
			else;
		}
	}
	return 0;
}