//������ ����ϱ� (for�� ���)
//2~9���� �� ȭ�� �ȿ� ���//2�� for�� 2set�̿� �ѹ� ��� . �ٷ� �̾ 3�� for���� 1set���� �̿��ؼ� �Ȱ��� ��� 
#include <stdio.h>
int main()
{
	int i, j,k,mod;
	for (i = 1; i <= 9; i++)
	{
		for (j = 2; j <= 5; j++)
		{
			printf("%d*%d=%d\t", j, i, i * j);
		}
		printf("\n");
	}
	printf("\n\n");
	for (i = 1; i <= 9; i++)
	{
		for (j = 6; j <= 9; j++)
		{
			printf("%d*%d=%d\t", j, i, i * j);
		}
		printf("\n");
	}
	for (i = 0; i < 50; i++) { printf("-"); }printf("\n");
	printf("<3�� for���� �̿��� ���>\n");
	
	for (k = 0; k < 2; k++)//�ι� ����
	{
		for (i = 1; i <= 9; i++)//9�� ����
		{
		
			for (j= 2; j< 6; j++)//2~5���� ����. 
			{
				printf("%d*%d=%d\t", j+k*4, i, i * (j+k*4));//k=0 2~5, k=1: 6~9

			}
			
			printf("\n");
		}
		printf("\n\n");
	}
	return 0;

}